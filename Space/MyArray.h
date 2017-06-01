#pragma once
class MyArray
{
public:
	MyArray(void);
	MyArray(int contador);
	~MyArray(void);
	double *data;
	int size;
	bool operator==(const MyArray& areglo)const;
	bool operator!=(const MyArray& areglo)const;
	MyArray& operator = (const MyArray& init);
	MyArray operator+(const MyArray& point);
	MyArray operator-(const MyArray& point);
private:
	void Copy(const MyArray& init);
};

