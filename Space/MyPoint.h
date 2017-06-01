#pragma once
class MyPoint
{
public:
	MyPoint(void);
	MyPoint(const MyPoint& init);
	~MyPoint(void);
	double x;
	double y;
	double GetModulo();
	double GetAbsModulo();
	double GetMax();
	double GetMin();
	double GetAverage();
	double GetStd();
	MyPoint& operator = (const MyPoint& init);
	MyPoint operator+(const MyPoint& point);
	MyPoint operator-(const MyPoint& point);
private:
	void Copy(const MyPoint& init);
};

