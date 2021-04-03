#pragma once
#include<iostream>
#include<string>

using namespace std;

class Eclipse
{
private:
	char tipo;
	int fecha;
	int hora;
	bool sismos;
	bool lluvias;
	string visibilidad;
public:

	Eclipse();
	Eclipse(char,int,int,bool,bool,string);
	~Eclipse();

	char getTipo();
	int getFecha();
	int getHora();
	bool getSismos();
	bool getLluvias();
	string getVisibilidad();

	void setTipo(char v);
	void setFecha(int v);
	void setHora(int v);
	void setSismos(bool v);
	void setLluvias(bool v);
	void setVisibilidad(string v);

	void mostrar();

};
	
	

