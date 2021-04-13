#pragma once
#include<iostream>

using namespace std;

class CContacto
{
public:
	CContacto();
	~CContacto();

	void setNombre(string);
	void setTelefono(int);
	void setSexo(char);
	void setFacultad(char);
	void setFecha(int);
	void setEmail(string);
	void setRedSocial(string);

	string  getNombre();
	int		getTelefono();
	char	getSexo();
	char	getFacultad();
	int		getFecha();
	string  getEmail();
	string  getRedSocial();

private:
	string nombre;
	int telefono;
	char sexo;
	char facultad;
	int	fecha;
	string email;
	string red_social;
};


