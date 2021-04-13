#include "CContacto.h"

CContacto::CContacto()
{
	nombre = "";
	telefono = 0;
	sexo = ' ';
	facultad = ' ';
	fecha = 0;
	email = "";
	red_social = "";
}

CContacto::~CContacto()
{
}

void CContacto::setNombre(string value)
{
	nombre = value;
}
void CContacto::setTelefono(int value)
{
	telefono = value;
}
void CContacto::setSexo(char value)
{
	sexo = value;
}
void CContacto::setFacultad(char value)
{
	facultad = value;
}
void CContacto::setFecha(int value)
{
	fecha = value;
}
void CContacto::setEmail(string value)
{
	email = value;
}
void CContacto::setRedSocial(string value)
{
	red_social = value;
}

string CContacto::getNombre()
{
	return nombre;
}

int CContacto::getTelefono()
{
	return telefono;
}

char CContacto::getSexo()
{
	return sexo;
}

char CContacto::getFacultad()
{
	return facultad;
}

int CContacto::getFecha()
{
	return fecha;
}

string CContacto::getEmail()
{
	return email;
}

string CContacto::getRedSocial()
{
	return red_social;
}
