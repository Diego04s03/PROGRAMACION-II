#include "CArrSatelite.hpp"

ArrSatelite::ArrSatelite()
{
	N = new int(0);
	arr = new Satelite * [*N];
	nHorizontal = 0;
	nVertical = 0;
	nTodo = 0;
}

ArrSatelite::~ArrSatelite()
{
	for (int i = 0; i < *N; i++)
		delete arr[i];
	delete[] arr;

	delete N;
}

void ArrSatelite::mover_todos(int MAXW,int MAXH)
{
	for (int i = 0; i < *N; i++)
		arr[i]->mover(MAXW,MAXH);
}
/*
void ArrSatelite::insertar()
{
	Satelite** aux = new Satelite * [*N + 1];
	for (size_t i = 0; i < *N; i++)
		aux[i] = arr[i];

	aux[*N] = new Satelite();
	
	*N += 1;
	arr = aux;
}*/
void ArrSatelite::insertarV()
{
	Satelite** aux = new Satelite * [*N + 1];
	for (size_t i = 0; i < *N; i++)
		aux[i] = arr[i];

	aux[*N] = new Satelite();
	aux[*N]->setDX(0);
	aux[*N]->setDY(1);

	*N += 1;
	arr = aux;
	nVertical++;
}
void ArrSatelite::insertarH()
{
	Satelite** aux = new Satelite * [*N + 1];
	for (size_t i = 0; i < *N; i++)
		aux[i] = arr[i];

	aux[*N] = new Satelite();

	*N += 1;
	arr = aux;
	nHorizontal++;
}
void ArrSatelite::insertarT()
{
	Satelite** aux = new Satelite * [*N + 1];
	for (size_t i = 0; i < *N; i++)
		aux[i] = arr[i];

	aux[*N] = new Satelite();
	aux[*N]->setDX(1);
	aux[*N]->setDY(1);
	*N += 1;
	arr = aux;
	nTodo++;
}

void ArrSatelite::setModelos(char valor)
{
	for (int i = 0; i < *N; i++)
		arr[i]->setModelo(valor);

}

int ArrSatelite::getN()
{
	return *N;
}

int ArrSatelite::getNHorizontal() { return nHorizontal; }
int ArrSatelite::getNVertical(){ return nVertical; }
int ArrSatelite::getNTodo() { return nTodo; }
