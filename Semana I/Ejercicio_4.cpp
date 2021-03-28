#include<iostream>
#include<time.h>

using namespace std;

void generateData(int* arr, int *n) {
	for (int i = 0; i < *n; i++)
		arr[i] = rand() % 50 + 1;
}
void printData(int* arr, int *n) {
	for (int i = 0; i < *n; i++)
		cout << i << "\t" << arr[i] << endl;
}

void eraseMultipleOfThree(int*&arr, int* n) {
	int count = 0;
	int* aux = new int[*n];
	for (int i = 0; i < *n; i++)
	{
		if (arr[i] % 3 != 0) {
			aux[count] = arr[i];
			count++;
		}
	}
	arr = aux;
	*n = count;
}

void bubbleSort(int*&arr, int *n) {
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
void insert(int* arr, int* n) {
	*n+=1;
	int* dato = new int;
	cout << "Digite el dato a insertar: "; cin >> *dato;

	arr[*n - 1] = *dato;

	bubbleSort(arr, n);
}

int main() {

	srand(time(NULL));

	int* arr1;
	int *n = new int(40 + rand() % 11);
	arr1 = new int[*n];

	 generateData(arr1, n);
	 printData(arr1, n); cout << "\n==========" << endl;

	 eraseMultipleOfThree(arr1, n); cout << "\n==========" << endl;
	 printData(arr1, n);

	 bubbleSort(arr1, n); cout << "\n==========" << endl;;
	 printData(arr1, n);

	 insert(arr1, n); cout << "\n==========" << endl;;
	 printData(arr1, n);

	 cin.ignore();
	 cin.get();

	 return 0;
}