#include "ArrEclipse.hpp"

ArrEclipse::ArrEclipse() {
	arr = nullptr;
	N = 0;
}
ArrEclipse::~ArrEclipse() {
	for (int i = 0; i < N; i++)
		delete arr[i];
	if (arr != nullptr)
		delete[] arr;
}

void ArrEclipse::agregarEclipse(Eclipse* nuevo){
	Eclipse** aux = new Eclipse * [N + 1];
	for (int i = 0; i < N; i++)
		aux[i] = arr[i];

	aux[N] = nuevo;

	if (arr != nullptr)
		delete[] arr;

	arr = aux;
	N++;
}
void ArrEclipse::eliminarEclipse(int pos){
	Eclipse** aux = new Eclipse*[N - 1];

	for (int i = 0; i < pos; i++)
		aux[i] = arr[i];
	for (int i = 0; i < N - 1; i++)
		aux[i] = arr[1 + 1];

	delete arr[pos];
	if (arr != nullptr)
		delete[] arr;

	arr = aux;
	N--;

}
void ArrEclipse::mostrar(){
	for (int i = 0; i < N; i++)
	{
		arr[i]->mostrar();
	}
}


