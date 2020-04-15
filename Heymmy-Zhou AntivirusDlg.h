/*
Copyright(c) 2020 黑米粥工作室
黑米粥杀毒 V2.0 is licensed under Mulan PSL v2.
You can use this software according to the termsand conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at :
http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON - INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details.
*/

// Heymmy-Zhou AntivirusDlg.h: 头文件
//

#pragma once


// CHeymmyZhouAntivirusDlg 对话框
class CHeymmyZhouAntivirusDlg : public CDialogEx
{
// 构造
public:
	CHeymmyZhouAntivirusDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HEYMMYZHOUANTIVIRUS_DIALOG };
#endif

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
	afx_msg void OnBnClickedAbout();
	afx_msg void OnBnClickedWinver();
	afx_msg void OnBnClickedSd();
	afx_msg void OnBnClickedCtrl();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedLaji();
	afx_msg void OnBnClickedInf();
	afx_msg void OnBnClickedReg();
	afx_msg void OnBnClickedFang();
	afx_msg void OnBnClickedTodo();
	afx_msg void OnBnClickedComp();
	afx_msg void OnBnClickedShij();
	afx_msg void OnBnClickedXn();
	afx_msg void OnBnClickedZy();
	afx_msg void OnBnClickedZj();
	afx_msg void OnBnClickedQd();
	afx_msg void OnBnClickedAq();
	afx_msg void OnBnClickedFw();
	afx_msg void OnBnClickedPrint();
	afx_msg void OnBnClickedHf();
	afx_msg void OnBnClickedTsk();
};
