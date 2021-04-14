#include "CJuego.h"

CJuego::CJuego()
{
	nubes = new CArrNubes();
	aves = new CArrAves();
}

CJuego::~CJuego()
{
	delete nubes;
	delete aves;
}

void CJuego::start()
{
	
	while (true)
	{
		nubes->mostrarTodos();
		if (_kbhit()) {
			char tecla = toupper(_getch());
			switch (tecla)
			{
			case 'I': if (aves->Size() <= 10) aves->insertar(); break;
			case 'E': if (aves->Size() > 0) aves->eliminarUltimo();
				system("cls");  break;
			case 'P': aves->setPintadoRojo(true); break;
			case 'B': aves->setPintadoRojo(false); break;
			}
		}
		aves->moverTodos();
	}
		
	
}
	
