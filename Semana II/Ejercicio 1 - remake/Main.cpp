#include<iostream>
#include<ctime>
#include"CContrase�a.hpp"


using namespace std;

int main() { 
	srand(time(NULL));
	int N = rand() % 6 + 5;
	Contrase�a* p1 = new Contrase�a[N];
	Contrase�a* p2;
	bool* s1 = new bool[N];

	for (int i = 0; i < N; i++)
	{
		p1[i].generarContrase�a();
 	}

	for (int i = 0; i < N; i++)
	{
		s1[i] = p1[i].esSeguro();
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Contrasenia " << i + 1 << ": " << p1[i].getContrase�a() << (s1[i] ? " Seguro " : " No es Seguro") << endl;
	}

	system("pause");
}