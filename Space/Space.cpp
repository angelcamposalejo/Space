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
	My3DPoint a;
	a.x = 10.0;
	a.y = 12.0;
	a.z = -10.0;
	wstring texto;
	Sys::Format(texto, L"Minimo: %g\r\n",a.GetMin());
	tbxSalida.Text += texto;
	Sys::Format(texto, L"Maximo: %g\r\n", a.GetMax());
	tbxSalida.Text += texto;
	Sys::Format(texto, L"Average: %g\r\n", a.GetAverage());
	tbxSalida.Text += texto;
	MyPoint b;
	b.x = 11.5;
	b.y = -5.5;
	Sys::Format(texto, L"Minimo: %g\r\n", b.GetMin());
	tbxSalida.Text += texto;
}
void Space::Display(MyPoint p)
{
	wstring texto;
	Sys::Format(texto, L"(%g, %g, %g)\r\n",p.x,p.y,p.z);
	tbxSalida.Text += texto;
}

