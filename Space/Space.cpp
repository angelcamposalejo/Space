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
	MyArray x(5), y(6), z(5);
	int i;
	for (i = 0; i < 5; i++)
	{
		x.data[i] = 1 + i;
		z.data[i] = 1 + i;
	}
	for (i = 0; i < 6; i++)
	{
		y.data[i] = 2 * 1;
	}
	if (x == z)tbxSalida.Text += L"X y Z son iguales\r\n";
	if (x == y)tbxSalida.Text += L"X y Y son iguales\r\n";
	if (x != z)tbxSalida.Text += L"X y Z son diferentes\r\n";
	if (x != y)tbxSalida.Text += L"X y Y son diferentes\r\n";
	//Display(a + b);
}
void Space::Display(MyArray p)
{
	wstring texto;
	//Sys::Format(texto, L"(%g, %g)\r\n", p.x, p.y);
	tbxSalida.Text += texto;
}

