#include<iostream>
#include<conio.h>
#include"ArrEclipse.hpp"

using namespace std;

int main() {
	ArrEclipse* arr1 = new ArrEclipse();
	Eclipse* aux;
	string visibilidad;
	int fecha, hora,opc,pos;
	char tipo;
	bool sismos, lluvias;

	while (true)
	{
		do
		{
			system("cls");
			cout << "Lista de eclipses " << endl;
			cout << "1. Mostrar Eclipse " << endl;
			cout << "2. Agregar Eclipse " << endl;
			cout << "3. Eliminar Eclipse " << endl;
			cout << "4. Modificar Eclipse " << endl;
			cout << "5. salir" << endl;
			cout << "Opcion: "; cin >> opc;
		} while (!(opc>=1 && opc<=5));

		switch (opc)
		{
		case 1: arr1->mostrar(); break;
		case 2:
			cout << "Tipo: "; cin >> tipo;
			cout << "Fecha: "; cin >> fecha;
			cout << "Hora: "; cin >> hora;
			cout << "Sismos: "; cin >> sismos;
			cout << "Lluvias: "; cin >> lluvias;
			cout << "Visibilidad: "; cin >> visibilidad;

			arr1->agregarEclipse(new Eclipse(tipo, fecha, hora, sismos, lluvias, visibilidad));
			break;
		case 3: 
			cout << "Ingrese la posicion a eliminar: "; cin >> pos;
			arr1->eliminarEclipse(pos);
			break;
		case 4:
			cout << "Ingrese la posicion a modificar: "; cin >> pos;
			Eclipse* aux;

			aux = arr1->get(pos);
			cout << "Tipo: "; cin >> tipo;
			cout << "Fecha: "; cin >> fecha;
			cout << "Hora: "; cin >> hora;
			cout << "Sismos: "; cin >> sismos;
			cout << "Lluvias: "; cin >> lluvias;
			cout << "Visibilidad: "; cin >> visibilidad;

			aux->setTipo(tipo);
			aux->setFecha(fecha);
			aux->setHora(hora);
			aux->setSismos(sismos);
			aux->setLluvias(lluvias);
			aux->setVisibilidad(visibilidad);
			break;
		case 5:
			delete arr1;
			return 0;
		}
		_getch();
	}



	
	system("pause");

	return 0;
}