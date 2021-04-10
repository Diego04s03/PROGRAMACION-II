#pragma once
#include<iostream>

using namespace System;
using namespace std;
class Satelite
{
public:
	Satelite();
	~Satelite();
	void mover(int,int);
	void pintar();
	void borrar();

	void setX(int);
	void setY(int);
	void setDX(int);
	void setDY(int);
	void setModelo(char);


private:
	int x, y;
	int dx, dy;
	char modelo;
};




