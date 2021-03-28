#include<iostream>
#include<time.h>

using namespace std;

void generateData(int* arr, int* N) {
	for (int i = 0; i < *N; i++)
	arr[i] =  rand() % 50 + 1;
}
void printData(int* arr, int* N) {
	for (int i = 0; i < *N; i++)
		cout << i << "\t" << arr[i] << endl;
}


void bubbleSort(int* arr, int *N) {
	int aux;
	for (int i = 0; i < *N; i++)
	{
		for (int j = 0; j < *N-1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
}
int* modifyArray1(int* arr, int* N, int R) {
	int temporal;
	//algoritmo para eliminar numeros repetidos 
	for (int i = 0; i < *N -1; i++)
	{
		for (int j = i+1; j < *N; j++)
		{
			if (arr[i] == arr[j]) {
				
				for (int k = j; k < *N - 1; k++) {
					temporal = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = temporal;
				}
	
				*N -=1;
				j--;
			}
			
		}
	} 
	
	int* aux = new int[*N * R];
	
	int k = 0, it = 0;
	for (int i = 0; i < *N; i++)
	{
		for (int j = 0; j < R; j++)
		{
			aux[k] = arr[i];
			k++;
		}
		
	}
	
	*N *= R;
	return aux;
	
}

void value_R(int &R) {
	do
	{
		cout << "Digite el valor de R: "; cin >> R;
	} while (!(R >= 2 && R<=5 ));
}

int main() {

	srand(time(NULL));

	int* N = new int(rand() % 21 + 10);
	int* arr = new int[*N];
	int R ;

	generateData(arr, N);
	printData(arr, N); cout << endl;
	bubbleSort(arr, N);
	printData(arr, N); cout << endl;
	value_R(R);
	arr = modifyArray1(arr, N, R);
	printData(arr, N); cout << endl;

	cin.ignore();
	cin.get();

	return 0;
}
