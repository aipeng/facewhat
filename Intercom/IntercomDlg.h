
// IntercomDlg.h : 头文件
//

#pragma once
#include "icclient1.h"


// CIntercomDlg 对话框
class CIntercomDlg : public CDialogEx
{
// 构造
public:
	CIntercomDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_INTERCOM_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CIcclient1 m_intercom;
	DECLARE_EVENTSINK_MAP()
	void OnMessageIcclient1(long Client, LPCTSTR Subject, const VARIANT& Data);
	void OnEventIcclient1(long Client, LPCTSTR EventTriggered, const VARIANT& Data);
	void OnConnectionLostIcclient1();
	void OnServerShutdownIcclient1();
};
