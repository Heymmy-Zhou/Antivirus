/*
Copyright(c) 2020 黑米粥工作室
黑米粥杀毒 V2.01 is licensed under Mulan PSL v2.
You can use this software according to the termsand conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at :
http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON - INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details.
*/

// Heymmy-Zhou AntivirusDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "Heymmy-Zhou Antivirus.h"
#include "Heymmy-Zhou AntivirusDlg.h"
#include "afxdialogex.h"
#include "cstdlib"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLicense();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedInter();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDC_LICENSE, &CAboutDlg::OnBnClickedLicense)
	ON_BN_CLICKED(IDC_INTER, &CAboutDlg::OnBnClickedInter)
END_MESSAGE_MAP()


// CHeymmyZhouAntivirusDlg 对话框



CHeymmyZhouAntivirusDlg::CHeymmyZhouAntivirusDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_HEYMMYZHOUANTIVIRUS_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHeymmyZhouAntivirusDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CHeymmyZhouAntivirusDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_ABOUT, &CHeymmyZhouAntivirusDlg::OnBnClickedAbout)
	ON_BN_CLICKED(IDC_WINVER, &CHeymmyZhouAntivirusDlg::OnBnClickedWinver)
	ON_BN_CLICKED(IDC_SD, &CHeymmyZhouAntivirusDlg::OnBnClickedSd)
	ON_BN_CLICKED(IDC_CTRL, &CHeymmyZhouAntivirusDlg::OnBnClickedCtrl)
	ON_BN_CLICKED(IDC_LAJI, &CHeymmyZhouAntivirusDlg::OnBnClickedLaji)
	ON_BN_CLICKED(IDC_INF, &CHeymmyZhouAntivirusDlg::OnBnClickedInf)
	ON_BN_CLICKED(IDC_REG, &CHeymmyZhouAntivirusDlg::OnBnClickedReg)
	ON_BN_CLICKED(IDC_FANG, &CHeymmyZhouAntivirusDlg::OnBnClickedFang)
	ON_BN_CLICKED(IDC_TODO, &CHeymmyZhouAntivirusDlg::OnBnClickedTodo)
	ON_BN_CLICKED(IDC_COMP, &CHeymmyZhouAntivirusDlg::OnBnClickedComp)
	ON_BN_CLICKED(IDC_SHIJ, &CHeymmyZhouAntivirusDlg::OnBnClickedShij)
	ON_BN_CLICKED(IDC_XN, &CHeymmyZhouAntivirusDlg::OnBnClickedXn)
	ON_BN_CLICKED(IDC_ZJ, &CHeymmyZhouAntivirusDlg::OnBnClickedZj)
	ON_BN_CLICKED(IDC_FW, &CHeymmyZhouAntivirusDlg::OnBnClickedFw)
	ON_BN_CLICKED(IDC_TSK, &CHeymmyZhouAntivirusDlg::OnBnClickedTsk)
END_MESSAGE_MAP()


// CHeymmyZhouAntivirusDlg 消息处理程序

BOOL CHeymmyZhouAntivirusDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CHeymmyZhouAntivirusDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CHeymmyZhouAntivirusDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CHeymmyZhouAntivirusDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CAboutDlg::OnBnClickedLicense()
{
	if (MessageBox(_T("Copyright (c) 2020 黑米粥工作室\n黑米粥杀毒 V2.01 is licensed under Mulan PSL v2.\nYou can use this software according to the terms and conditions of the Mulan PSL v2.\nYou may obtain a copy of Mulan PSL v2 at :\nhttp://license.coscl.org.cn/MulanPSL2\nTHIS SOFTWARE IS PROVIDED ON AN \"AS IS\" BASIS, WITHOUT WARRANTIES OF ANY KIND,\nEITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON - INFRINGEMENT,\nMERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.\nSee the Mulan PSL v2 for more details.\n\n您对“软件”的复制、使用、修改及分发受木兰宽松许可证，第2版的约束。\n\n按“确定”键阅读该许可协议。"), _T("许可证说明"), MB_ICONINFORMATION | MB_OKCANCEL) != IDOK)
		return;
	system("start https://license.coscl.org.cn/MulanPSL2/");
	MessageBox(_T("如果浏览器未启动，请手动访问<http://license.coscl.org.cn/MulanPSL2>查看。"),_T("请注意"),MB_ICONWARNING);
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedAbout()
{
	MessageBeep(MB_ICONEXCLAMATION);
	CAboutDlg abb;
	abb.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedWinver()
{

	MessageBeep(MB_ICONEXCLAMATION);
	system("winver");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedSd()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("shutdown /i");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedCtrl()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("control");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedButton11()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("MdSched");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedLaji()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("cleanmgr");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedInf()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("msinfo32");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedReg()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("regedit");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedFang()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("WF.msc");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedTodo()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("taskschd.msc /s");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedComp()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("compmgmt.msc /s");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedShij()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("eventvwr.msc /s");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedXn()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("perfmon.msc /s");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedZy()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("perfmon.exe /res");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedZj()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("comexp.msc");
	// TODO: 在此添加控件通知处理程序代码
}

void CHeymmyZhouAntivirusDlg::OnBnClickedFw()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("services.msc");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedPrint()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("printmanagement.msc");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedHf()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("RecoveryDrive.exe");
	// TODO: 在此添加控件通知处理程序代码
}


void CHeymmyZhouAntivirusDlg::OnBnClickedTsk()
{
	MessageBeep(MB_ICONEXCLAMATION);
	system("taskmgr");
	// TODO: 在此添加控件通知处理程序代码
}

void CAboutDlg::OnBnClickedInter()
{
	system("start https://github.com/Heymmy-Zhou/Antivirus");
	MessageBox(_T("如果浏览器未启动，请手动访问<https://github.com/Heymmy-Zhou/Antivirus>查看。"), _T("请注意"), MB_ICONWARNING);
	// TODO: 在此添加控件通知处理程序代码
}
