#include "stdafx.h"  //________________________________________ Space.cpp
#include "Space.h"
#include "MyPoint.h"
#include "RandomDay.h"
#include "MyArray.h"
#include "My3DPoint.h"
#include "MyConnection.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Space app;
	return app.BeginDialog(IDI_Space, hInstance);
}

void Space::Window_Open(Win::Event& e)
{
	if (MyConnection::IsOpen() == true)tbxSalida.Text += L"1. Open\r\n";
	MyConnection x;
	if (MyConnection::IsOpen() == true)tbxSalida.Text += L"2. Open\r\n";
}
void Space::Display(MyPoint p)
{
	wstring texto;
	Sys::Format(texto, L"(%g, %g, %g)\r\n",p.x,p.y,p.z);
	tbxSalida.Text += texto;
}

