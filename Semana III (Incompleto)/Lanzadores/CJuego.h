#pragma once
#include<conio.h>
#include"CLanzador.h"

class CJuego
{
public:
	CJuego();
	~CJuego();

	void inicio();
	void start();

private:
	CLanzador* lanzador1;
	CLanzador* lanzador2;
};


