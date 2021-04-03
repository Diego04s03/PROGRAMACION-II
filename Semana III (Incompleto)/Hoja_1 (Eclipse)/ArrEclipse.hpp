#pragma once
#include"Eclipse.hpp";
 class ArrEclipse
{
private:
	 int N;
	 Eclipse** arr;
public:
	ArrEclipse();
	~ArrEclipse();

	void agregarEclipse(Eclipse*);
	void eliminarEclipse(int);
	void mostrar();
	Eclipse* get(int pos) { return arr[pos]; }
};

