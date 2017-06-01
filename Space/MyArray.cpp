#include "stdafx.h"
#include "MyArray.h"


MyArray::MyArray(void)
{
	data = NULL;
}


MyArray::~MyArray(void)
{
}
MyArray::MyArray(int contador)
{
	data = new double[contador];
}
bool MyArray::operator==(const MyArray& arreglo)const
{
	for (int i = 0; i < 5; i++)
	{
		if (this->data[i] != arreglo.data[i])return false;
	}
	return true;
}
bool MyArray::operator!=(const MyArray& arreglo)const
{
	for (int i = 0; i < 5; i++)
	{
		if (this->data[i] != arreglo.data[i])return true;
	}
	return false;
}
MyArray& MyArray::operator = (const MyArray& init)
{
	Copy(init);
	return *this;
}
void MyArray::Copy(const MyArray &init)
{
	this->data = init.data;
}
MyArray MyArray::operator+(const MyArray& arreglo)
{
	MyArray temp(3);
	for (int i = 0; i < 3; i++)
	{	
		temp.data[i] = this->data[i] + arreglo.data[i];
	}
	return temp;
}
MyArray MyArray::operator-(const MyArray& arreglo)
{
	MyArray temp(3);
	for (int i = 0; i < 3; i++)
	{
		temp.data[i] = this->data[i] - arreglo.data[i];
	}
	return temp;
}