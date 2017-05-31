#pragma once
class MyPoint
{
public:
	MyPoint(void);
	~MyPoint(void);
	double x = 0.0;
	double y = 0.0;
	double GetModulo();
	double GetAbsModulo();
	double GetMax();
	double GetMin();
	double GetAverage();
	double GetStd();
};

