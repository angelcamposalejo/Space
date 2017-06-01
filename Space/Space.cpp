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
	b.x = 1.0;
	b.y = -2.0;
	MyPoint c =b;
	c.x -= 2.0;
	MyPoint d = a+b-c;
	Display(c);
	Display(d);
}
void Space::Display(MyPoint p)
{
	wstring texto;
	Sys::Format(texto, L"(%g, %g)\r\n", p.x, p.y);
	tbxSalida.Text += texto;
}

