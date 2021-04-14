#pragma once
#include"CNube.h"
class CArrNubes
{
public:
	CArrNubes();
	~CArrNubes();
	void mostrarTodos();
	void agregarNubes();
	

private:
	CNube** arr;
	int* N;
};


