#pragma once
class MyConnection
{
public:
	MyConnection(void);
	~MyConnection(void);
	static int contador;
	static bool IsOpen();
};

