#include "stdafx.h"
#include "MyPoint.h"


MyPoint::MyPoint(void)
{
	x = 0.0;
	y = 0.0;
}


MyPoint::~MyPoint()
{
}
MyPoint::MyPoint(const MyPoint& init)
{
	this->x = 0.0;
	this->y = 0.0;
	Copy(init);
}
MyPoint& MyPoint::operator = (const MyPoint& init)
{
	Copy(init);
	return *this;
}
MyPoint MyPoint::operator+(const MyPoint& point)
{
	MyPoint temp;
	temp.x = this->x + point.x;
	temp.y = this->y + point.y;
	return temp;
}
MyPoint MyPoint::operator-(const MyPoint& point)
{
	MyPoint temp;
	temp.x = this->x - point.x;
	temp.y = this->y - point.y;
	return temp;
}
MyPoint MyPoint::operator--()
{
	MyPoint tmp = *this;
	x -= 1.0;
	y -= 1.0;
	return tmp;
}
MyPoint MyPoint::operator--(int not_used)
{
	MyPoint tmp = *this;
	x -= 1.0;
	y -= 1.0;
	return tmp;
}
MyPoint MyPoint::operator++()
{
	MyPoint tmp = *this;
	x += 1.0;
	y += 1.0;
	return tmp;
}
MyPoint MyPoint::operator++(int not_used)
{
	MyPoint tmp = *this;
	x += 1.0;
	y += 1.0;
	return tmp;
}
void MyPoint::Copy(const MyPoint &init)
{
	this->x = init.x;
	this->y = init.y;
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
