#pragma once
#include"CArrAves.h"
#include"CArrNubes.h"
#include<ctime>
#include<conio.h>


class CJuego
{
public:
	CJuego();
	~CJuego();

	void start();

private:
	CArrNubes* nubes;
	CArrAves* aves;
};



