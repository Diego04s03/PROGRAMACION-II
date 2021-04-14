#include "CArrNubes.h"

CArrNubes::CArrNubes()
{
	N = new int(0);
	agregarNubes();
}

CArrNubes::~CArrNubes()
{
	for (int i = 0; i < *N; i++)
		delete arr[i];
	delete[] arr;
	
}

void CArrNubes::mostrarTodos()
{
	for (int i = 0; i < *N; i++)
	{
		arr[i]->mostrar();
	}
}

void CArrNubes::agregarNubes()
{
	int n = 3 + rand() % 3;
	for (int i = 0; i < n; i++)
	{
		CNube** aux = new CNube * [*N + 1];
		for (int i = 0; i < *N; i++)
			aux[i] = arr[i];

		aux[*N] = new CNube();

		arr = aux;
		*N += 1;
	}
}

