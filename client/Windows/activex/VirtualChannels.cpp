// Implementation of the main RDP client interface.

#include "stdafx.h"
#include "FreeRdpCtrl.h"

extern "C" int freerdp_channels_client_load(rdpChannels* channels, rdpSettings* settings, PVIRTUALCHANNELENTRY entry, void* data);


CSimpleArray<CFreeRdpCtrl*> CFreeRdpCtrl::instances;


void CFreeRdpCtrl::ClearVirtualChannels()
{
	mVirtualChannels.RemoveAll();
	mOpenedChannelHandles.RemoveAll();
	for (int i = 0; i < mReadChannelBuffers.GetSize(); i++)
	{
		BYTE* p = mReadChannelBuffers[i].buffer;
		if (p != NULL)
		{
			free(p);
		}
	}
	mReadChannelBuffers.RemoveAll();
	if (mOpenedChannelsEvent != NULL)
	{
		CloseHandle(mOpenedChannelsEvent);
	}
	mVirtualChannelHandle = NULL;
}


CFreeRdpCtrl& CFreeRdpCtrl::GetInstanceFromVirtualInitHandle(LPVOID handle)
{
	for (int i = 0; i < instances.GetSize(); i++)
	{
		if (instances[i]->mVirtualChannelHandle == handle)
		{
			return *instances[i];
		}
	}

	return *(CFreeRdpCtrl*)NULL;
}


CFreeRdpCtrl& CFreeRdpCtrl::GetInstanceFromVirtualOpenHandle(DWORD handle)
{
	for (int i = 0; i < instances.GetSize(); i++)
	{
		for (int j = 0; j < instances[i]->mOpenedChannelHandles.GetSize(); j++)
		{
			if (instances[i]->mOpenedChannelHandles[j] == handle)
			{
				return *instances[i];
			}
		}
	}

	return *(CFreeRdpCtrl*)NULL;
}


VOID VCAPITYPE CFreeRdpCtrl::VirtualChannelOpenEvent(DWORD openHandle, UINT event,
	LPVOID pData, UINT32 dataLength, UINT32 totalLength, UINT32 dataFlags)
{
	switch (event)
	{
	case CHANNEL_EVENT_DATA_RECEIVED:
	{
		int i;
		int j;
		for (i = 0; i < instances.GetSize(); i++)
		{
			for (j = 0; j < instances[i]->mOpenedChannelHandles.GetSize(); j++)
			{
				if (instances[i]->mOpenedChannelHandles[j] == openHandle)
				{
					goto CHANNEL_FOUND;
				}
			}
		}
		return;

	CHANNEL_FOUND:

		CFreeRdpCtrl& rThis = *instances[i];
		ReadChannelBuffer& readChannelBuffer = rThis.mReadChannelBuffers[j];
		if (readChannelBuffer.buffer == NULL)
		{
			readChannelBuffer.buffer = (BYTE*)malloc(totalLength);
		}
		if (readChannelBuffer.buffer != NULL)
		{
			CopyMemory(readChannelBuffer.buffer + readChannelBuffer.dataSize, pData, dataLength);
			readChannelBuffer.dataSize += dataLength;
		}
		if (dataFlags & CHANNEL_FLAG_LAST)
		{
			CComBSTR channelName(rThis.mVirtualChannels[j].name);
			CComBSTR data(totalLength / 2, (LPCTSTR)readChannelBuffer.buffer);
			rThis.Fire_OnChannelReceivedData(channelName, data);
		}
		free(readChannelBuffer.buffer);
		readChannelBuffer.buffer = NULL;
		readChannelBuffer.dataSize = 0;

		break;
	}

	case CHANNEL_EVENT_WRITE_COMPLETE:
	case CHANNEL_EVENT_WRITE_CANCELLED:
		free(pData);
		break;
	}
}


VOID VCAPITYPE CFreeRdpCtrl::VirtualChannelInitEvent(LPVOID pInitHandle, UINT event, LPVOID pData, UINT dataLength)
{
	CFreeRdpCtrl& rThis = GetInstanceFromVirtualInitHandle(pInitHandle);
	if (&rThis == NULL)
	{
		return;
	}

	switch (event)
	{
	case CHANNEL_EVENT_CONNECTED:
		for (int i = 0; i < rThis.mVirtualChannels.GetSize(); i++)
		{
			UINT result = rThis.mVirtualChannelEntryPoints.pVirtualChannelOpen(pInitHandle,
				rThis.mOpenedChannelHandles.GetData() + i, rThis.mVirtualChannels[i].name, VirtualChannelOpenEvent);
			if (result != CHANNEL_RC_OK)
			{
				rThis.mOpenedChannelHandles[i] = 0;
			}
		}
		SetEvent(rThis.mOpenedChannelsEvent);
		break;

	case CHANNEL_EVENT_DISCONNECTED:
		for (int i = 0; i < rThis.mVirtualChannels.GetSize(); i++)
		{
			DWORD handle = rThis.mOpenedChannelHandles[i];
			if (handle != 0)
			{
				rThis.mOpenedChannelHandles[i] = 0;
				rThis.mVirtualChannelEntryPoints.pVirtualChannelClose(handle);
			}
		}
		rThis.ClearVirtualChannels();
		break;

	case CHANNEL_EVENT_TERMINATED:
		break;
	}
}


BOOL VCAPITYPE CFreeRdpCtrl::VirtualChannelEntry(PCHANNEL_ENTRY_POINTS pEntryPoints)
{
	if (pEntryPoints->cbSize < sizeof(CHANNEL_ENTRY_POINTS_FREERDP))
	{
		return FALSE;
	}
	CHANNEL_ENTRY_POINTS_FREERDP& entryPoints = *(CHANNEL_ENTRY_POINTS_FREERDP*)pEntryPoints;
	CFreeRdpCtrl& rThis = *(CFreeRdpCtrl*)entryPoints.pExtendedData;

	CopyMemory(&rThis.mVirtualChannelEntryPoints, pEntryPoints, sizeof(CHANNEL_ENTRY_POINTS_FREERDP));

	UINT result = rThis.mVirtualChannelEntryPoints.pVirtualChannelInit(&rThis.mVirtualChannelHandle,
		rThis.mVirtualChannels.GetData(), rThis.mVirtualChannels.GetSize(), VIRTUAL_CHANNEL_VERSION_WIN2000, VirtualChannelInitEvent);
	if (result != CHANNEL_RC_OK)
	{
		return FALSE;
	}

	return TRUE;
}


HRESULT CFreeRdpCtrl::CreateVirtualChannels()
{
	int result = freerdp_channels_client_load(mContext->channels, mSettings, (PVIRTUALCHANNELENTRY)VirtualChannelEntry, this);
	if (result != 0)
	{
		return E_FAIL;
	}

	return S_OK;
}


HRESULT CFreeRdpCtrl::CreateVirtualChannels(CComBSTR& channelList)
{
	HRESULT errorResult = E_FAIL;
	int listLength = channelList.Length() + 1;
	LPCTSTR p = channelList.m_str;
	int nameLength = 0;
	CHANNEL_DEF channelDef;
	for (int i = 0; i < listLength; i++)
	{
		TCHAR c = channelList[i];
		if (c == ',' || c == 0)
		{
			if (nameLength > 7)
			{
				errorResult = E_INVALIDARG;
				goto ERROR_RETURN;
			}

			try
			{
				CStringA channelName(p, nameLength);
				strcpy(channelDef.name, channelName);
				channelDef.options = 0;
				mVirtualChannels.Add(channelDef);
				mOpenedChannelHandles.Add(0);
				mReadChannelBuffers.Add({ NULL, 0 });
			}
			catch (...)
			{
				errorResult = E_OUTOFMEMORY;
				goto ERROR_RETURN;
			}

			nameLength = 0;
			p = channelList.m_str + i + 1;
		}
		else
		{
			nameLength++;
		}
	}
	mOpenedChannelsEvent = CreateEvent(NULL, TRUE, FALSE, NULL);

	return S_OK;

ERROR_RETURN:
	ClearVirtualChannels();
	return errorResult;
}


HRESULT CFreeRdpCtrl::SendOnVirtualChannel(CComBSTR& channel, BYTE* data, UINT dataSize)
{
	CStringA channelName(channel.m_str);
	int i;
	for (i = 0; i < mVirtualChannels.GetSize(); i++)
	{
		if (channelName == mVirtualChannels[i].name)
		{
			goto CHANNEL_FOUND;
		}
	}
	return E_INVALIDARG;

CHANNEL_FOUND:
	if (data == NULL || dataSize == 0)
	{
		return S_OK;
	}

	DWORD handle = mOpenedChannelHandles[i];
	if (handle == 0 || mOpenedChannelsEvent == NULL)
	{
		return E_FAIL;
	}
	WaitForSingleObject(mOpenedChannelsEvent, INFINITE);
	BYTE* dataCopy = (BYTE*)malloc(dataSize);
	if (dataCopy == NULL)
	{
		return E_OUTOFMEMORY;
	}
	CopyMemory(dataCopy, data, dataSize);
	UINT result = mVirtualChannelEntryPoints.pVirtualChannelWrite(handle, dataCopy, dataSize, dataCopy);
	if (result != CHANNEL_RC_OK)
	{
		return E_FAIL;
	}

	return S_OK;
}


HRESULT CFreeRdpCtrl::SetVirtualChannelOptions(CStringA& chanName, long chanOptions)
{
	for (int i = 0; i < mVirtualChannels.GetSize(); i++)
	{
		if (chanName == mVirtualChannels[i].name)
		{
			mVirtualChannels[i].options = chanOptions;
			return S_OK;
		}
	}

	return E_INVALIDARG;
}


HRESULT CFreeRdpCtrl::GetVirtualChannelOptions(CStringA& chanName, long *pChanOptions)
{
	for (int i = 0; i < mVirtualChannels.GetSize(); i++)
	{
		if (chanName == mVirtualChannels[i].name)
		{
			*pChanOptions = mVirtualChannels[i].options;
			return S_OK;
		}
	}

	return E_INVALIDARG;
}


