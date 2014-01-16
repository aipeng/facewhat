#pragma once

// 计算机生成了由 Microsoft Visual C++ 创建的 IDispatch 包装类

// 注意: 不要修改此文件的内容。如果此类由
//  Microsoft Visual C++ 重新生成，您的修改将被覆盖。

/////////////////////////////////////////////////////////////////////////////
// CIcclient1 包装类

class CIcclient1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CIcclient1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x2067B99A, 0xE36D, 0x11D1, { 0x9A, 0x3E, 0x0, 0x0, 0xE8, 0xDD, 0x8A, 0x37 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// 特性
public:
enum
{
    cpUser = 0,
    cpComputer = 1,
    cpHost = 2,
    cpDescriptor = 3,
    cpUDPPort = 4,
    cpTCPPort = 5
}ICClientProperty;


// 操作
public:

// IICClient

// Functions
//

	void Connect()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Disconnect()
	{
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Subscribe(LPCTSTR Event)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Event);
	}
	void UnSubscribe(LPCTSTR Event)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Event);
	}
	BOOL Subscribed(LPCTSTR Event)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Event);
		return result;
	}
	void Trigger(LPCTSTR Event, VARIANT Data, BOOL IncludeSelf, BOOL Guaranteed, BOOL AbortOnFailure)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_BOOL VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Event, &Data, IncludeSelf, Guaranteed, AbortOnFailure);
	}
	void SendMessage(long Client, LPCTSTR Subject, VARIANT Data, BOOL Guaranteed)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_VARIANT VTS_BOOL ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Client, Subject, &Data, Guaranteed);
	}
	void GetAllClients(VARIANT * Clients)
	{
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Clients);
	}
	void GetAllEvents(VARIANT * Events)
	{
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Events);
	}
	void GetClientInfo(long Client, BSTR * User, BSTR * Computer, BSTR * Host, long * UDPPort, long * TCPPort, BSTR * Descriptor, VARIANT * Details, DATE * ConnectTime, VARIANT * Events)
	{
		static BYTE parms[] = VTS_I4 VTS_PBSTR VTS_PBSTR VTS_PBSTR VTS_PI4 VTS_PI4 VTS_PBSTR VTS_PVARIANT VTS_PDATE VTS_PVARIANT ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Client, User, Computer, Host, UDPPort, TCPPort, Descriptor, Details, ConnectTime, Events);
	}
	void GetEventInfo(LPCTSTR Event, long * SubscriberCount, long * TriggerCount, DATE * CreationTime, DATE * LastTriggered, VARIANT * Subscribers)
	{
		static BYTE parms[] = VTS_BSTR VTS_PI4 VTS_PI4 VTS_PDATE VTS_PDATE VTS_PVARIANT ;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Event, SubscriberCount, TriggerCount, CreationTime, LastTriggered, Subscribers);
	}
	void FindClients(long ClientProperty, VARIANT Value, VARIANT * Clients)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_PVARIANT ;
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ClientProperty, &Value, Clients);
	}
	long get_Id()
	{
		long result;
		InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_Connected()
	{
		BOOL result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_Descriptor()
	{
		CString result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Descriptor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_LocalUDPPort()
	{
		short result;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_LocalUDPPort(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_ServerHost()
	{
		CString result;
		InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ServerHost(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	short get_ServerPort()
	{
		short result;
		InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_ServerPort(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_Details()
	{
		VARIANT result;
		InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Details(VARIANT newValue)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x1b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	long get_TimeOut()
	{
		long result;
		InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TimeOut(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_UsingMulticast()
	{
		BOOL result;
		InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_MulticastAddress()
	{
		CString result;
		InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	short get_MulticastPort()
	{
		short result;
		InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	short get_MulticastScope()
	{
		short result;
		InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	CString get_ServerVersion()
	{
		CString result;
		InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_ServerMaxConnections()
	{
		long result;
		InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_Identifier()
	{
		long result;
		InvokeHelper(0x1c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void GetClientInfoV(long Client, VARIANT * User, VARIANT * Computer, VARIANT * Host, VARIANT * UDPPort, VARIANT * TCPPort, VARIANT * Descriptor, VARIANT * Details, VARIANT * ConnectTime, VARIANT * Events)
	{
		static BYTE parms[] = VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Client, User, Computer, Host, UDPPort, TCPPort, Descriptor, Details, ConnectTime, Events);
	}
	void GetEventInfoV(LPCTSTR Event, VARIANT * SubscriberCount, VARIANT * TriggerCount, VARIANT * CreationTime, VARIANT * LastTriggered, VARIANT * Subscribers)
	{
		static BYTE parms[] = VTS_BSTR VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Event, SubscriberCount, TriggerCount, CreationTime, LastTriggered, Subscribers);
	}
	short get_LocalTCPPort()
	{
		short result;
		InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
		return result;
	}
	void put_LocalTCPPort(short newValue)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

// Properties
//



};
