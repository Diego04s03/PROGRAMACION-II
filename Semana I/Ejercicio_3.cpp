#include<iostream>
#include<time.h>

using namespace std;

void generateData(int* arr, int *n) {
	for (int i = 0; i < *n; i++)
		arr[i] = rand() % 100 + 1;
}
void printData(int* arr, int* n) {
	cout<< endl;
	for (int i = 0; i < *n; i++)
		cout << arr[i] << " ";
	cout << endl<<endl;
}

void printRepeatedData(int* arr, int *n) {
	int cont = 0;
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *n; j++)
		{
			if (arr[i] == arr[j]) {
				cont++;
			}			
		}

		cout << arr[i] << " se repite " << cont << " veces" << endl;
		i += cont -1;
		cont = 0;
	}
}
void clearRepeatedData(int* arr, int* n) {
	int temporal;
	//algoritmo para eliminar numeros repetidos 
	for (int i = 0; i < *n - 1; i++)
	{
		for (int j = i + 1; j < *n; j++)
		{
			if (arr[i] == arr[j]) {

				for (int k = j; k < *n - 1; k++) {
					temporal = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = temporal;
				}

				*n -= 1;
				j--;
			}
		}
		
	}
	printData(arr, n);
}

void bubbleSort(int* arr, int *n) {
	int aux;
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *n - 1; j++)
		{
			if (arr[j] < arr[j + 1]) {
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
}

int main() {

	srand(time(NULL));

	int* arr1;
	int *n = new int(rand() % 30 +1);
	arr1 = new int[*n];
	 generateData(arr1, n);
	 bubbleSort(arr1, n);
	 printData(arr1, n);
	 printRepeatedData(arr1, n);
	 clearRepeatedData(arr1, n);
	
	 cin.ignore();
	 cin.get();

	 return 0;
}