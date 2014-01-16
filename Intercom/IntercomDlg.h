
// IntercomDlg.h : ͷ�ļ�
//

#pragma once
#include "icclient1.h"


// CIntercomDlg �Ի���
class CIntercomDlg : public CDialogEx
{
// ����
public:
	CIntercomDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_INTERCOM_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
