#include "stdafx.h"
#include "MyConnection.h"

int MyConnection::contador = 0;
MyConnection::MyConnection(void)
{
	contador++;
}


MyConnection::~MyConnection(void)
{
	contador--;
}
bool MyConnection::IsOpen()
{
	return(contador > 0);
}

