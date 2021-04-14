#pragma once
#include<iostream>

using namespace System;
using namespace std;

class CAves
{
public:
	CAves();
	~CAves();
	void mostrar();
	void mostrarPintado();
	void borrar();
	void mover(bool);
	void direccion();
	


private:
	int  x, y;
	int dx, dy;
	int ancho, alto;
	int velocidad,acelerador;
};



