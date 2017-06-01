#include "stdafx.h"  //________________________________________ Space.cpp
#include "Space.h"
#include "MyPoint.h"
#include "RandomDay.h"
#include "MyArray.h"
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Space app;
	return app.BeginDialog(IDI_Space, hInstance);
}

void Space::Window_Open(Win::Event& e)
{
	MyArray x(3), z(3);
	int i;
	for (i = 0; i < 3; i++)
	{
		x.data[i] = 1 + i;
		z.data[i] = 3 * i + 1;
	}
	Display(L"x", x);
	Display(L"z", z);
	MyArray a = x + z;
	Display(L"a", a);
	a = x - z;
	Display(L"a", a);
}
void Space::Display(wstring variable, MyArray p)
{
	wstring texto;
	for (int i = 0; i < 3; i++)
	{
		Sys::Format(texto, L"%s[%d]= %g\r\n", variable.c_str(),i, p.data[i]);
		tbxSalida.Text += texto;
	}

}

