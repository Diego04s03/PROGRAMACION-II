#include "CSatelite.hpp"

Satelite::Satelite()
{
	x = rand() % 80;
	y = rand() % 40;
	dx = 1;
	dy = 0;
	modelo = 'B';
}


Satelite::~Satelite()
{

}

void Satelite::mover(int MAXW,int MAXH)
{
	borrar();
	if (x + dx == 0 || x + dx == MAXW) dx *= -1;
	if (y + dy == 0 || y + dy == MAXH) dy *= -1;
	
	x += dx;
	y += dy;
	pintar();
}

void Satelite::pintar()
{
	Console::SetCursorPosition(x, y); cout << modelo;
}
void Satelite::borrar()
{
	Console::SetCursorPosition(x, y); cout << " ";
}



void Satelite::setX(int value)
{
	x = value;
}
void Satelite::setY(int value)
{
	y = value;
}
void Satelite::setDX(int value)
{
	dx = value;
}
void Satelite::setDY(int value)
{
	dy = value;
}

void Satelite::setModelo(char value)
{
	modelo = value;
}

