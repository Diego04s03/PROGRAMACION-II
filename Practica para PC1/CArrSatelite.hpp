#pragma once
#include"CSatelite.hpp"
class ArrSatelite
{
public:
	ArrSatelite();
	~ArrSatelite();

	void mover_todos(int, int);
	//void insertar();
	void insertarV();
	void insertarH();
	void insertarT();
	void setModelos(char);
	int getN();

	int getNHorizontal();
	int getNVertical();
	int getNTodo();

private:
	int* N;
	Satelite** arr;
	int nHorizontal;
	int nVertical;
	int nTodo;
};


