#pragma once
#include"CContacto.h"
#include<iostream>

using namespace std;

class CArrContacto
{
public:
	CArrContacto();
	~CArrContacto();

	void insertar();
	void eliminar(int);
	void mostrar();
	CContacto* at(int);
	int Size();

private:
	CContacto** arr;
	int*N;
};



