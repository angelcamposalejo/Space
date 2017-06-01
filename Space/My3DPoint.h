#pragma once
#include "MyPoint.h"
class My3DPoint :
	public MyPoint
{
public:
	My3DPoint(void);
	~My3DPoint(void);
	double z;
	double GetMin();
	double GetMax();
	double GetAverage();
};

