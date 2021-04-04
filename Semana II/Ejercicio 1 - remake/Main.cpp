#include<iostream>
#include<ctime>
#include"CContraseña.hpp"


using namespace std;

int main() { 
	srand(time(NULL));
	int N = rand() % 6 + 5;
	Contraseña* p1 = new Contraseña[N];
	Contraseña* p2;
	bool* s1 = new bool[N];

	for (int i = 0; i < N; i++)
	{
		p1[i].generarContraseña();
 	}

	for (int i = 0; i < N; i++)
	{
		s1[i] = p1[i].esSeguro();
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Contrasenia " << i + 1 << ": " << p1[i].getContraseña() << (s1[i] ? " Seguro " : " No es Seguro") << endl;
	}

	system("pause");
}