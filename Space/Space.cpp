#include "stdafx.h"  //________________________________________ Space.cpp
#include "Space.h"
#include "MyPoint.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Space app;
	return app.BeginDialog(IDI_Space, hInstance);
}

void Space::Window_Open(Win::Event& e)
{
	MyPoint p;
	p.x = 1.0;
	p.y = 2.0;
	wstring texto;
	Sys::Format(texto, L"Modulo: %g\r\n", p.GetModulo());
	tbxSalida.Text += texto;
	Sys::Format(texto, L"Modulo Absoluto: %g\r\n", p.GetAbsModulo());
	tbxSalida.Text += texto;
	Sys::Format(texto, L"Máximo: %g\r\n", p.GetMax());
	tbxSalida.Text += texto;
	Sys::Format(texto, L"Mínimo: %g\r\n", p.GetMin());
	tbxSalida.Text += texto;
	Sys::Format(texto, L"Average: %g\r\n", p.GetAverage());
	tbxSalida.Text += texto;
	Sys::Format(texto, L"Std: %g\r\n", p.GetStd());
	tbxSalida.Text += texto;
}

