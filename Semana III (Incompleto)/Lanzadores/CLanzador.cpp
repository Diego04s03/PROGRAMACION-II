#include "CLanzador.h"

CLanzador::CLanzador()
{
	nBalas = new int(0);
	balas = new CBala * [*nBalas];
	x = 1;
	y = 0;
}

CLanzador::~CLanzador()
{
	
	delete nBalas;
	for (int i = 0; i < *nBalas; i++)
		delete balas[i];
	delete[] balas;
}

void CLanzador::generarBala()
{
	CBala** aux = new CBala *[*nBalas + 1];
	for (int i = 0; i < *nBalas; i++)
		aux[i] = balas[i];

	aux[*nBalas] = new CBala(x+2,y);
	

	balas = aux;

	*nBalas += 1;
}
void CLanzador::generarBala2()
{
	
	CBala** aux = new CBala * [*nBalas + 1];
	for (int i = 0; i < *nBalas; i++)
		aux[i] = balas[i];

	aux[*nBalas] = new CBala(x, y -2);
	aux[*nBalas]->setDX(Direccion());
	aux[*nBalas]->setDY(Direccion());
	balas = aux;

	*nBalas += 1;
}

void CLanzador::EliminarBala(int pos) {
	CBala** aux = new CBala * [*nBalas - 1];
	for (int i = 0; i < pos; i++)
		aux[i] = balas[i];
	for (int i = pos; i < *nBalas; i++)
		aux[i-1] = balas[i];

	balas = aux;

	*nBalas -= 1;
}
void CLanzador::EliminarBala2() {
	CBala** aux = new CBala * [*nBalas - 1];
	for (int i = 0; i < *nBalas; i++)
		aux[i] = balas[i];

	balas = aux;
	
	*nBalas -= 1;
	balas[*nBalas]->borrar();
}

int CLanzador::Direccion()
{
	bool dir;
	dir = rand() % 2;
	if (dir) return 1;
	
	return -1;
}

void CLanzador::Disparar()
{
	for (int i = 0; i < *nBalas; i++) {
		balas[i]->mover();
		if (balas[i]->getX() == 119) {
			balas[i]->setDY(1);
			balas[i]->setDX(0);
		}
		if (balas[i]->getY() == 28) {
			balas[i]->setDY(0);
			balas[i]->setDX(-1);
		}
		if (balas[i]->getX() == 0) {
			balas[i]->setDY(-1);
			balas[i]->setDX(0);
		}
		if (balas[i]->getX() == 0 && balas[i]->getY() == 1) {
			balas[i]->borrar();
			EliminarBala(i);
		}
	}
}
void CLanzador::Disparar2()
{
	for (int i = 0; i < *nBalas; i++)
		balas[i]->mover2();
}
void CLanzador::mostrar()
{
	System::Console::ForegroundColor = System::ConsoleColor::Blue;
	System::Console::SetCursorPosition(x, y); std::cout << char(219) << "=";
	System::Console::ForegroundColor = System::ConsoleColor::White;
}

void CLanzador::mostrar2()
{
	System::Console::ForegroundColor = System::ConsoleColor::Red;
	System::Console::SetCursorPosition(x, y); std::cout << char(219);
	System::Console::SetCursorPosition(x, y-1); std::cout << "||";
	System::Console::ForegroundColor = System::ConsoleColor::White;
}

void CLanzador::setX(int value)
{
	x = value;
}

void CLanzador::setY(int value)
{
	y = value;
}


int CLanzador::size()
{
	return *nBalas;
}

