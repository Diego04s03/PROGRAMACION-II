#include "CJuego.h"

CJuego::CJuego()
{
	lanzador1 = new CLanzador();
	lanzador2 = new CLanzador();
}

CJuego::~CJuego()
{
	delete lanzador1;
	delete lanzador2;
}

void CJuego::inicio()
{
	lanzador2->setX(120 / 2);
	lanzador2->setY(30 / 2);
}
void CJuego::start()
{

	while (true)
	{
		lanzador1->mostrar();
		lanzador2->mostrar2();
	
		_sleep(20);
		if (_kbhit()) {
			char tecla = toupper(_getch());

			if (tecla == 'A') lanzador1->generarBala();
			if (tecla == 'R') lanzador2->generarBala2();
			if (tecla == 'E') lanzador2->EliminarBala2();
		}
		lanzador1->Disparar();
		lanzador2->Disparar2();
	}
}
