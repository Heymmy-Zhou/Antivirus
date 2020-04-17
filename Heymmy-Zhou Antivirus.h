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

// Heymmy-Zhou Antivirus.h: PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"		// 主符号


// CHeymmyZhouAntivirusApp:
// 有关此类的实现，请参阅 Heymmy-Zhou Antivirus.cpp
//

class CHeymmyZhouAntivirusApp : public CWinApp
{
public:
	CHeymmyZhouAntivirusApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CHeymmyZhouAntivirusApp theApp;
