#include "CBala.h"

CBala::CBala(int x,int y)
{
	this->x = x;
	this->y = y;
	dx = 1;
	dy = 0;
}

CBala::~CBala()
{
}

void CBala::mover()
{
	borrar();	
	x += dx;
	y += dy;
	mostrar();
}

void CBala::mover2()
{
	borrar();
	if (x + dx == 0 || x + dx == 120) dx *= -1;
	if (y + dy == 0 || y + dy == 30) dy *= -1;
	x += dx;
	y += dy;
	mostrar2();
}

void CBala::borrar()
{
	
	System::Console::SetCursorPosition(x, y); std::cout<<" ";
}

void CBala::mostrar()
{
	System::Console::ForegroundColor = System::ConsoleColor::Blue;
	System::Console::SetCursorPosition(x, y); std::cout << "O";
}
void CBala::mostrar2()
{
	System::Console::ForegroundColor = System::ConsoleColor::Red;
	System::Console::SetCursorPosition(x, y); std::cout << "O";
}
void CBala::setDX(int value)
{
	dx = value;
}
void CBala::setDY(int value)
{
	dy = value;
}
int CBala::getX()
{
	return x;
}
int CBala::getY()
{
	return y;
}
