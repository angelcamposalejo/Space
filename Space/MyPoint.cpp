#include "stdafx.h"
#include "MyPoint.h"


MyPoint::MyPoint()
{
	x = 0.0;
	y=0.0;
}


MyPoint::~MyPoint()
{
}
double MyPoint::GetModulo()
{
	return abs(x) + abs(y);
}
double MyPoint::GetAbsModulo()
{
	return sqrt((x*x) + (y*y));
}
double MyPoint::GetMax()
{
	if (x > y)return x;
	return y;
}
double MyPoint::GetMin()
{
	if (x < y)return x;
	return y;
}
double MyPoint::GetAverage()
{
	return (x + y) / 2;
}
double MyPoint::GetStd()
{
	double average = GetAverage();
	return (pow((x - average), 2) + pow((y - average), 2)) / 2;
}
