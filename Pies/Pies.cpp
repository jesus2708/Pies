#include "stdafx.h"  //________________________________________ Pies.cpp
#include "Pies.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Pies app;
	return app.BeginDialog(IDI_Pies, hInstance);
}

void Pies::Window_Open(Win::Event& e)
{
}

void Pies::btClick_Click(Win::Event& e)
{
	const int input = this->tbxInches.IntValue;
	int ft = input / 12;
	int ini = input % 12;
	wstring texto;
	texto = Sys::Convert::ToString(ft) + L" ft and in " + Sys::Convert::ToString(ini);
	tbxFtIn.Text = texto;
	
}

