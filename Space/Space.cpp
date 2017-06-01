#include "stdafx.h"  //________________________________________ Space.cpp
#include "Space.h"
#include "MyPoint.h"
#include "RandomDay.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Space app;
	return app.BeginDialog(IDI_Space, hInstance);
}

void Space::Window_Open(Win::Event& e)
{
	MyPoint a, b;
	a.x = 2.0;
	a.y = 3.0;
	b.x = -5.0;
	b.y = -3.0;
	if (a == b)this->tbxSalida.Text += L"It is a equals\r\n";
	if (a != b)this->tbxSalida.Text += L"It is diferent\r\n";
	if (a < b)this->tbxSalida.Text += L"Its a less than b\r\n";
	if (a > b)this->tbxSalida.Text += L"Its a greater than b\r\n";
	//Display(a);
	//Display(b);
	//Display(a + b);
}
void Space::Display(MyPoint p)
{
	wstring texto;
	Sys::Format(texto, L"(%g, %g)\r\n", p.x, p.y);
	tbxSalida.Text += texto;
}

