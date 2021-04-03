#include "Eclipse.hpp"

Eclipse::Eclipse(){}
Eclipse::Eclipse(char tipo,int fecha,int hora,bool sismos, bool lluvias, string visibilidad) {
	this->tipo = tipo;
	this->fecha = fecha;
	this->hora = hora;
	this->sismos = sismos;
	this->lluvias = lluvias;
	this->visibilidad = visibilidad;
}
Eclipse::~Eclipse(){}

char Eclipse::getTipo() { return tipo; }
int Eclipse::getFecha() { return fecha; }
int Eclipse::getHora() { return hora; }
bool Eclipse::getSismos() { return sismos; }
bool Eclipse::getLluvias() { return lluvias; }
string Eclipse::getVisibilidad() { return visibilidad; }

void Eclipse::setTipo(char v) { tipo = v; }
void Eclipse::setFecha(int v) { fecha = v; }
void Eclipse::setHora(int v) { hora = v;}
void Eclipse::setSismos(bool v) { sismos = v; }
void Eclipse::setLluvias(bool v) { lluvias = v; }
void Eclipse::setVisibilidad(string v) { visibilidad = v; }

void Eclipse::mostrar(){
	cout << "Tipo: " << tipo << endl;
	cout << "fecha: " << fecha << endl;
	cout << "hora: " << hora << endl;
	cout << "sismos: "; cout << (sismos ? "Si" : "No") << endl;
	cout << "lluvias: "; cout << (lluvias ? "Si" : "No") << endl;
	cout << "Continente con mayor Visbilidad: " << visibilidad << endl;
}

