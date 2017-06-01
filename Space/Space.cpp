#include "stdafx.h"  //________________________________________ Space.cpp
#include "Space.h"
#include "MyPoint.h"
#include "RandomDay.h"
#include "MyArray.h"
#include "My3DPoint.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Space app;
	return app.BeginDialog(IDI_Space, hInstance);
}

void Space::Window_Open(Win::Event& e)
{
	My3DPoint a, b;
	a.x = 10.0;
	a.y = 12.0;
	a.z = 25.5;
	b.x = 4.4;
	Display(a);
	Display(b);
	MyPoint c;
	c.x = 18.8;
	Display(c);
	
}
void Space::Display(MyPoint p)
{
	wstring texto;
	Sys::Format(texto, L"(%g, %g, %g)\r\n",p.x,p.y,p.z);
	tbxSalida.Text += texto;
}

