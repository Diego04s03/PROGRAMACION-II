#include "CArrAves.h"

CArrAves::CArrAves()
{
	N = new int(0);
	arr = new CAves * [*N];
	pintadoRojo = false;
}

CArrAves::~CArrAves()
{
	for (int i = 0; i < *N; i++)
		delete arr[i];
	delete[] arr;
}

void CArrAves::moverTodos()
{
	for (int i = 0; i < *N; i++)
	{
		arr[i]->mover(pintadoRojo);
	}
}

void CArrAves::insertar()
{
	CAves** aux = new CAves *[*N + 1];
	for (int i = 0; i < *N; i++)
		aux[i] = arr[i];

	aux[*N] = new CAves();

	arr = aux;
	*N += 1;
}

void CArrAves::eliminarUltimo()
{
	CAves** aux = new CAves * [*N -1];
	for (int i = 0; i < *N-1; i++)
		aux[i] = arr[i];

	
	*N -= 1;
	arr = aux;	

}

void CArrAves::setPintadoRojo(bool value)
{
	pintadoRojo = value;
}

CAves* CArrAves::at(int pos)
{
	return arr[pos];
}

int CArrAves::Size()
{
	return *N;
}
