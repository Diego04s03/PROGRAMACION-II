#pragma once
#include<iostream>

using namespace std;
using namespace System;
class CNube
{
public:
	CNube();
	~CNube();
	void mostrar();
	void actualizar();
	int getX();
	int getY();
	int getAncho();
	int getAlto();
private:
	int x, y;
	int ancho, alto;
};



