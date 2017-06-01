#include "stdafx.h"
#include "RandomDay.h"


RandomDay::RandomDay(void)
{
	srand(::GetTickCount());
	contador = 0;
}


RandomDay::~RandomDay(void)
{

}
const wchar_t*RandomDay::Get()
{
	
	if (contador = 0)
	{
		currentDay = rand() % (8 - 1);
		return GetDayName(currentDay);
	}
	else
	{
		currentDay++;
		return GetNombreDia(currentDay);
	}
	
}
const wchar_t*RandomDay::GetNombreDia(int currentDay)
{
	if (currentDay > 7)currentDay = 1;
	switch (currentDay)
	{
	case 1:return L"Lunes";
	case 2:return L"Martes";
	case 3:return L"Miercoles";
	case 4:return L"Jueves";
	case 5:return L"Viernes";
	case 6:return L"Sabado";
	case 7:return L"Domingo";
	default: return L"Error";
	}
}
const wchar_t*RandomDay::GetDayName(int currentDay)
{
	switch (currentDay)
	{
	case 1:return L"Monday";
	case 2:return L"Tuesday";
	case 3:return L"Wednesday";
	case 4:return L"Thursday";
	case 5:return L"Friday";
	case 6:return L"Saturday";
	case 7:return L"Sunday";
	default: return L"Error";
	}
}
