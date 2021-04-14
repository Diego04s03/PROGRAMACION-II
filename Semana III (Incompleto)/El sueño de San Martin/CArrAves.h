#pragma once
#include"CAves.h"

class CArrAves
{
public:
	CArrAves();
	~CArrAves();

	void moverTodos();
	void insertar();
	void eliminarUltimo();
	void setPintadoRojo(bool);
	CAves* at(int pos);
	int Size();

private:
	CAves** arr;
	int* N;
	bool pintadoRojo;
};



