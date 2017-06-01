#pragma once
class MyArray
{
public:
	MyArray(void);
	MyArray(int contador);
	~MyArray(void);
	double *data;
	bool operator==(const MyArray& areglo)const;
	bool operator!=(const MyArray& areglo)const;
};

