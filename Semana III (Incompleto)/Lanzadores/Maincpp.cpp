#include<iostream>
#include<ctime>
#include"CJuego.h"
int main() {
	System::Console::CursorVisible = false;
	srand(time(NULL));
	CJuego* game = new CJuego();

	game->inicio();
	game->start();

	return 0;
}