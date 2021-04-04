#include "CContrase�a.hpp"

Contrase�a::Contrase�a()
{
	longitud = 12;
	nMayusculas = 0;
	nMinusculas = 0;
	nNUmeros = 0;
	//generarContrase�a();
}
Contrase�a::Contrase�a(int longitud)
{
	this->longitud = longitud;
	nMayusculas = 0;
	nMinusculas = 0;
	nNUmeros = 0;
	generarContrase�a();
}
Contrase�a::~Contrase�a()
{
}

bool Contrase�a::esSeguro(){
	if (nMayusculas > 2 && nMinusculas > 1 && nNUmeros > 5) return true;
	
	return false;
}
void Contrase�a::generarContrase�a(){
	int digit = rand() % 3;
	for (int i = 0; i < longitud; i++)
	{
		switch (digit)
		{
		case 0: contrase�a += char(rand() % 26 + 65); nMayusculas++; break;
		case 1: contrase�a += char(rand() % 26 + 97); nMinusculas++; break;
		case 2: contrase�a += char(rand() % 10 + 48); nNUmeros++;	break;
		}
		digit = rand() % 3;
	}

}

void	Contrase�a::setLongitud(int v) { longitud = v; }
int		Contrase�a::getLongitud() { return longitud; }
string  Contrase�a::getContrase�a() { return contrase�a; }