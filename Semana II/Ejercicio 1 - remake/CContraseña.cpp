#include "CContraseña.hpp"

Contraseña::Contraseña()
{
	longitud = 12;
	nMayusculas = 0;
	nMinusculas = 0;
	nNUmeros = 0;
	//generarContraseña();
}
Contraseña::Contraseña(int longitud)
{
	this->longitud = longitud;
	nMayusculas = 0;
	nMinusculas = 0;
	nNUmeros = 0;
	generarContraseña();
}
Contraseña::~Contraseña()
{
}

bool Contraseña::esSeguro(){
	if (nMayusculas > 2 && nMinusculas > 1 && nNUmeros > 5) return true;
	
	return false;
}
void Contraseña::generarContraseña(){
	int digit = rand() % 3;
	for (int i = 0; i < longitud; i++)
	{
		switch (digit)
		{
		case 0: contraseña += char(rand() % 26 + 65); nMayusculas++; break;
		case 1: contraseña += char(rand() % 26 + 97); nMinusculas++; break;
		case 2: contraseña += char(rand() % 10 + 48); nNUmeros++;	break;
		}
		digit = rand() % 3;
	}

}

void	Contraseña::setLongitud(int v) { longitud = v; }
int		Contraseña::getLongitud() { return longitud; }
string  Contraseña::getContraseña() { return contraseña; }