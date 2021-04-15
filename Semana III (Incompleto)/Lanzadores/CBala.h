#pragma once
#include<iostream>

class CBala
{
public:
	CBala(int,int);
	~CBala();
	void mover();
	void mover2();
	void borrar();
	void mostrar();
	void mostrar2();
	void setDX(int);
	void setDY(int);

	int getX();
	int getY();
private:
	int x, y;
	int dx, dy;

};


