#pragma once  //______________________________________ Pies.h  
#include "Resource.h"
class Pies: public Win::Dialog
{
public:
	Pies()
	{
	}
	~Pies()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxInches;
	Win::Button btClick;
	Win::Label lb2;
	Win::Textbox tbxFtIn;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(9.10167);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.24896);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Pies";
		lb1.CreateX(NULL, L"Inches", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.52917, 0.47625, 2.11667, 0.60854, hWnd, 1000);
		tbxInches.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.44979, 1.34938, 2.32833, 0.60854, hWnd, 1001);
		btClick.CreateX(NULL, L">>", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.51896, 1.34938, 2.56646, 0.68792, hWnd, 1002);
		lb2.CreateX(NULL, L"Ft - In", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6.37646, 0.50271, 2.09021, 0.60854, hWnd, 1003);
		tbxFtIn.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 6.35000, 1.45521, 2.56646, 0.60854, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxInches.Font = fontArial009A;
		btClick.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxFtIn.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
