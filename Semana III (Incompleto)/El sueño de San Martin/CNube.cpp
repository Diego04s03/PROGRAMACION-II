#include "CNube.h"

CNube::CNube()
{
	alto = 4;
	ancho = 12;
	x = (ancho + rand() % (120 - ancho + 1))-ancho;
	y = (alto + rand() % (10 - alto  + 1)) - alto;
}
CNube::~CNube()
{
}
void CNube::mostrar()
{
	Console::SetCursorPosition(x, y);	  cout << "   _    _   ";
	Console::SetCursorPosition(x, y + 1); cout << " _( )__( )_ ";
	Console::SetCursorPosition(x, y + 2); cout << "(_   _    _)";
	Console::SetCursorPosition(x, y + 3); cout << "  (_) (__)  ";
}

void CNube::actualizar()
{
	x = (ancho + rand() % (120 - ancho + 1)) - ancho;
	y = (alto + rand() % (10 - alto + 1)) - alto;
}

int CNube::getX()
{
	return x;
}

int CNube::getY()
{
	return y;
}

int CNube::getAncho()
{
	return ancho;
}

int CNube::getAlto()
{
	return alto;
}
