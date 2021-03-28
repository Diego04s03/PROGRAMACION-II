#include<iostream>
#include<time.h>

using namespace std;

void generateData(int* arr, int n) {
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 21;
}
void printData(int* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << i << "\t" << arr[i] << endl;
}
void findMinor(int* arr, int n) {
	int minor = arr[0]; int pos;
	for (int i = 0; i < n; i++) {
		if (minor > arr[i]) {
			minor = arr[i]; pos = i;
		}
	}

	cout << "Ubicacion del menor es: " << pos << endl;
}
void findHigh(int* arr, int n) {
	int high = arr[0]; int pos;
	for (int i = 0; i < n; i++) {
		if (high < arr[i]) {
			high = arr[i]; pos = i;
		}
	}

	cout << "Ubicacion del menor es: " << pos << endl;
}
void bubbleSort(int* arr, int n) {
	int aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] < arr[j + 1]) {
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
	printData(arr, n);
}


int main() {
	srand(time_t(NULL));

	int* arr1;
	int n = rand() % 100 + 1;
	arr1 = new int[n];
	int opc;

	cout << "1. Generar Datos " << endl;
	cout << "2. Imprimir Datos " << endl;
	cout << "3. Buscar Mayor " << endl;
	cout << "4. Buscar Menor " << endl;
	cout << "5. Ordenar de forma descendente " << endl;

	do
	{
		cout << "\nOpcion: "; cin >> opc;
		if (opc == 1) generateData(arr1, n);
		if (opc == 2) printData(arr1, n);
		if (opc == 3) findHigh(arr1, n);
		if (opc == 4) findMinor(arr1, n);
		if (opc == 5) bubbleSort(arr1, n);

	} while (!(opc == 0));
}