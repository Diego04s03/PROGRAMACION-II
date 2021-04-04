#pragma once
#include<string>

using namespace std;


class Contrase�a
{
public:
	Contrase�a();
	Contrase�a(int);
	~Contrase�a();

	bool esSeguro();
	void generarContrase�a();

	void setLongitud(int);
	int getLongitud();
	string getContrase�a();

private:
	int longitud;
	string contrase�a;
	int nMayusculas;
	int nMinusculas;
	int nNUmeros;
};



