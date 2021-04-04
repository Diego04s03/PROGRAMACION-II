#pragma once
#include<string>

using namespace std;


class Contraseña
{
public:
	Contraseña();
	Contraseña(int);
	~Contraseña();

	bool esSeguro();
	void generarContraseña();

	void setLongitud(int);
	int getLongitud();
	string getContraseña();

private:
	int longitud;
	string contraseña;
	int nMayusculas;
	int nMinusculas;
	int nNUmeros;
};



