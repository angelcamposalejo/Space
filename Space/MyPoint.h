#pragma once
class MyPoint
{
public:
	MyPoint(void);
	MyPoint(const MyPoint& init);
	~MyPoint(void);
	double x;
	double y;
	double z;
	double GetModulo();
	double GetAbsModulo();
	double GetMax();
	double GetMin();
	double GetAverage();
	double GetStd();
	MyPoint& operator = (const MyPoint& init);
	MyPoint operator+(const MyPoint& point);
	MyPoint operator-(const MyPoint& point);
	MyPoint operator--();
	MyPoint operator--(int not_used);
	MyPoint operator++();
	MyPoint operator++(int not_used);
	bool operator==(const MyPoint& point)const;
	bool operator!=(const MyPoint& point)const;
	bool operator<(const MyPoint& point)const;
	bool operator>(const MyPoint& point)const;
private:
	void Copy(const MyPoint& init);
};

