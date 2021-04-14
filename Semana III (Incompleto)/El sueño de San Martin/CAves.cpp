#include "CAves.h"

CAves::CAves()
{
	
	alto = 4;
	ancho = 6;
	x = (ancho + rand() % (119-ancho+1)) - ancho;
	y = (alto + rand() % (29-alto+1)) - alto;
	velocidad = ( 5 + rand() % 30)*10;
	acelerador = 0;
	direccion();
}

CAves::~CAves()
{
}

void CAves::mostrar()
{
	
	Console::SetCursorPosition(x, y);	  cout << "  _   ";
	Console::SetCursorPosition(x, y + 1); cout << " ( °> ";
	Console::SetCursorPosition(x, y + 2); cout << "/(  )\\";
	Console::SetCursorPosition(x, y + 3); cout << "  ^^  ";
	
}
void CAves::mostrarPintado()
{

	Console::SetCursorPosition(x, y);	  cout << "  _   ";
	Console::SetCursorPosition(x, y + 1); cout << " ( °> ";
	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(x, y + 2); cout << "/(  )\\";
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(x, y + 3); cout << "  ^^  ";

}

void CAves::borrar()
{
	Console::SetCursorPosition(x, y);	  cout << "      ";
	Console::SetCursorPosition(x, y + 1); cout << "      ";
	Console::SetCursorPosition(x, y + 2); cout << "      ";
	Console::SetCursorPosition(x, y + 3); cout << "      ";
}
void CAves::mover(bool pintar)
{
	if (velocidad == acelerador){
		acelerador = 0;
		borrar();
		if (x + dx == 0 || x + dx + ancho == 120) dx *= -1;
		if (y + dy == 0 || y + dy + alto == 30) dy *= -1;
		x += dx;
		y += dy;
		if (pintar) {
			mostrarPintado();
		}
		else {
			mostrar();
		}
		
	}
	else {
		acelerador++;
	}
}
void CAves::direccion()
{
	bool dirX, dirY;
	dirX = rand() % 2;
	dirY = rand() % 2;
	if (dirX) dx = 1;
	else dx = -1;
	if (dirY) dy = 1;
	else dy = -1;
}


 


