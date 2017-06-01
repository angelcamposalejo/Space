#include "stdafx.h"
#include "My3DPoint.h"


My3DPoint::My3DPoint(void)
{
}


My3DPoint::~My3DPoint(void)
{
}
double My3DPoint::GetMin()
{
	if (x < y)
	{
		if (x < z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else
	{
		if (y < z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}
double My3DPoint::GetMax()
{
	if (x > y)
	{
		if (x > z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else
	{
		if (y > z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
}
double My3DPoint::GetAverage()
{
	return (x + y+z) / 3;
}