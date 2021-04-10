#include<iostream>
#include<ctime>
#include<conio.h>
#include"CArrSatelite.hpp"

using namespace std;
using namespace System;

const int MAXW = 80;
const int MAXH = 40;

int main() {

	srand(time(NULL));

	Console::SetWindowSize(MAXW, MAXH);
	Console::CursorVisible = false;

	char modelo;
	bool fin = false;
	ArrSatelite* s1 = new ArrSatelite();

	cout << "Ingrese un caracter: "; cin >> modelo;

	s1->insertarH();
	s1->setModelos(modelo);
	system("cls");
	while (!fin)
	{
		if (_kbhit()) {
			char tecla = toupper(_getch());
			switch (tecla)
			{
			case 'V': s1->insertarV(); 
				s1->setModelos(modelo);
				break;
			case 'H': s1->insertarH(); 
				s1->setModelos(modelo);
				break;
			case 'T': s1->insertarT(); 
				s1->setModelos(modelo);
				break;
			case 27:
				fin = true;
				break;
			}
		}
		s1->mover_todos(MAXW, MAXH);
		_sleep(70);
	}
	
	system("cls");
	cout << "Reporte" << endl;
	cout << "===============================" << endl<<endl<<endl;
	cout << "\t\t" << "Satelite"<<endl;
	cout << "Horizonal \t" << s1->getNHorizontal() << endl;
	cout << "Vertical \t" << s1->getNVertical() << endl;
	cout << "Toda pantalla \t" << s1->getNTodo() << endl;
	system("pause");

	return 0;
}