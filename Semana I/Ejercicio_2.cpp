#include<iostream>
#include<time.h>

using namespace std;

void generateData(int* arr, int n) {
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 21;
}
void printData(int* arr, int n) {
	for (int i = 0; i < n; i++)
		cout <<"Alumno "<<i+1<<": "<< arr[i] << endl;
}
void printMinor(int* arr, int n) {
	int minor = arr[0];
	for (int i = 0; i < n; i++) 
		if (minor > arr[i]) minor = arr[i]; 
	

	cout << "Menor nota: " << minor << endl;
}
void printHigh(int* arr, int n) {
	int high = arr[0];
	for (int i = 0; i < n; i++) 
		if (high < arr[i]) 	high = arr[i]; 
	

	cout << "Mayor nota: " << high << endl;
}
void printAverageScore(int* arr, int n) {
	int suma = 0;
	float n_promedio;
	for (int i = 0; i < n; i++)
		suma += arr[i];

	n_promedio = suma / n;

	cout << n_promedio << endl;
}
void printStudent_Status(int* arr, int n) {
	
	int contA = 0, contD = 0;
	float porcentajeA , porcentajeD ;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 13) contA++;
		else contD++;
	}
	porcentajeA = contA *100;
	porcentajeD = contD * 100;

	cout <<"Aprobados: "<< contA << endl;
	cout << "Desaprobados: " << contD << endl;
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
}

int main() {

	srand(time(NULL));

	int* arr1;
	int n;
	cout << "Ingrese la cantidad de alumnos: "; cin >> n;
	arr1 = new int[n];
	int opc;

	cout << "\n1. Generar Datos " << endl;
	cout << "2. Imprimir Datos " << endl;
	cout << "3. Imprimir la mayor nota " << endl;
	cout << "4. Imprimir la menor nota " << endl;
	cout << "5. Imprimir la nota promedio " << endl;
	cout << "6. Imprimir porcentaje de aprobados y desaprobados " << endl;
	cout << "7. Ordenar de forma descendente " << endl;

	do
	{
		cout << "\nOpcion: "; cin >> opc;
		if (opc == 1) generateData(arr1, n);
		if (opc == 2) printData(arr1, n);
		if (opc == 3) printHigh(arr1, n);
		if (opc == 4) printMinor(arr1, n);
		if (opc == 5) printAverageScore(arr1, n);
		if (opc == 6) printStudent_Status(arr1, n);
		if (opc == 7) bubbleSort(arr1, n);

	} while (!(opc == 0));
}