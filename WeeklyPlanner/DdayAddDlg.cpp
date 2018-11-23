// DdayAddDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "WeeklyPlanner.h"
#include "DdayAddDlg.h"
#include "afxdialogex.h"

// CDdayAddDlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CDdayAddDlg, CDialogEx)

CDdayAddDlg::CDdayAddDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DDAY_ADD_DIALOG, pParent)
{

}

CDdayAddDlg::~CDdayAddDlg()
{
}

void CDdayAddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_DDAY_MEMO, m_editDdayMemo);
	DDX_Control(pDX, IDOK, m_btnDdayOK);
}


BEGIN_MESSAGE_MAP(CDdayAddDlg, CDialogEx)
	//ON_EN_CHANGE(IDC_EDIT2, &CDdayAddDlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT_DDAY_MEMO, &CDdayAddDlg::OnEnChangeEditDdayMemo)
	ON_BN_CLICKED(IDOK, &CDdayAddDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CDdayAddDlg �޽��� ó�����Դϴ�.




//BOOL CDdayAddDlg::PreTranslateMessage(MSG* pMsg)
//{
//	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
//	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
//	{
//		if ((GetDlgItem(IDC_EDIT_DDAY_MEMO) == GetFocus()))
//		{
//			CEdit* edit = (CEdit*)GetDlgItem(IDC_EDIT_DDAY_MEMO);
//			int nLen = edit->GetWindowTextLength();
//			edit->SetSel(nLen, nLen);
//			edit->ReplaceSel(_T("\r\n"));
//		}
//	}
//
//
//	return CDdayAddDlg::PreTranslateMessage(pMsg);
//}


void CDdayAddDlg::OnEnChangeEditDdayMemo()
{
	// TODO:  RICHEDIT ��Ʈ���� ���, �� ��Ʈ����
	// CDialogEx::OnInitDialog() �Լ��� ������ 
	//�ϰ� ����ũ�� OR �����Ͽ� ������ ENM_CHANGE �÷��׸� �����Ͽ� CRichEditCtrl().SetEventMask()�� ȣ������ ������
	// �� �˸� �޽����� ������ �ʽ��ϴ�.

	// TODO:  ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}


BOOL CDdayAddDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	GetDlgItem(IDOK)->SendMessage(WM_KILLFOCUS, NULL);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}


void CDdayAddDlg::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	//if (GetDlgItem(IDC_DDAY_TITLE)->GetDlgItemTextW(IDC_DDAY_TITLE) != 0 && GetDlgItem(IDC_DDAY_MEMO)->GetDlgItemTextW != 0) {

	//}



	CDialogEx::OnOK();
}


BOOL CDdayAddDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
	{

		if ((GetDlgItem(IDC_EDIT_DDAY_MEMO) == GetFocus()))
		{
			CEdit* edit = (CEdit*)GetDlgItem(IDC_EDIT_DDAY_MEMO);
			int nLen = edit->GetWindowTextLength();
			edit->SetSel(nLen, nLen);
			edit->ReplaceSel(_T("\r\n"));
			return true;
		}


	}

	return CDialogEx::PreTranslateMessage(pMsg);
}