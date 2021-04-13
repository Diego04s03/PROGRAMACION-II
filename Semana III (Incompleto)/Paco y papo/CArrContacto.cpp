#include "CArrContacto.h"

CArrContacto::CArrContacto()
{
	N = new int(0);
	arr = new CContacto * [*N];
}

CArrContacto::~CArrContacto()
{
	for (int i = 0; i < *N; i++)
		delete arr[i];

	delete[] arr;
}

void CArrContacto::insertar()
{
	CContacto** aux = new CContacto * [*N + 1];

	for (int i = 0; i < *N; i++)
		aux[i] = arr[i];

	aux[*N] = new CContacto();

	arr = aux;
	*N += 1;
}

void CArrContacto::eliminar(int pos)
{
	CContacto** aux = new CContacto * [*N - 1];
	if (aux != nullptr) {
		for (int i = 0; i < pos; i++)
			aux[i] = arr[i];

		for (int i = pos; i < *N; i++)
			aux[i - 1] = arr[i];

		arr = aux;
		*N -= 1;
	}
}

void CArrContacto::mostrar()
{
	cout << endl;
	for (int i = 0; i < *N; i++)
	{
		cout << arr[i]->getNombre() << "\t" << arr[i]->getTelefono() << "\t" << arr[i]->getSexo()<<"\t" << arr[i]->getEmail() << "\t"
			<< arr[i]->getFacultad()<< "\t" << arr[i]->getFecha()<< "\t" << arr[i]->getRedSocial()<<  endl;
	}
}

CContacto* CArrContacto::at(int pos)
{
	return arr[pos];
}

int CArrContacto::Size()
{
	return *N;
}

