#pragma once

#include"CBala.h"
class CLanzador
{
public:
	CLanzador();
	~CLanzador();

	void generarBala();
	void generarBala2();
	void EliminarBala(int);
	void EliminarBala2();
	int Direccion();
	void Disparar();
	void Disparar2();
	void mostrar();
	void mostrar2();
	void setX(int);
	void setY(int);

	int size();
private:
	int x, y;
	CBala** balas;
	int* nBalas;
};



