#include<iostream>
#include"CArrContacto.h"
using namespace std;

int main() {

	CArrContacto* obj = new CArrContacto();
	int opc;
	string nombre, email, redsocial;
	int telefono, fecha,pos;
	char sexo, facultad;
	cout << "1. Agregar amigo " << endl;
	cout << "2. Eliminar amigo " << endl;
	cout << "3. Modificar amigo " << endl;
	cout << "4. Mostrar " << endl;
	
	while (true)
	{
		cout << "\nopcion: "; cin >> opc;
		switch (opc)
		{
		case 1:
			obj->insertar();
			cout << "Nombre: "; cin >> nombre;
			cout << "telefono: "; cin >> telefono;
			cout << "Sexo: "; cin >> sexo;
			cout << "Facultad: "; cin >> facultad;
			cout << "Fecha: "; cin >> fecha;
			cout << "Email: "; cin >> email;
			cout << "Red Social: "; cin >> redsocial;

			obj->at(obj->Size()-1)->setNombre(nombre);
			obj->at(obj->Size()-1)->setTelefono(telefono);
			obj->at(obj->Size()-1)->setSexo(sexo);
			obj->at(obj->Size()-1)->setFacultad(facultad);
			obj->at(obj->Size()-1)->setFecha(fecha);
			obj->at(obj->Size()-1)->setRedSocial(redsocial);

			break;
		case 2:
			cout << "Digite la pos del amigo a eliminar: "; cin >> pos;
			obj->eliminar(pos);
			break;
		case 3:
			cout << "Digite la pos del amigo a modificar: "; cin >> pos;
			cout << "Nombre: "; cin >> nombre;
			cout << "telefono: "; cin >> telefono;
			cout << "Sexo: "; cin >> sexo;
			cout << "Facultad: "; cin >> facultad;
			cout << "Fecha: "; cin >> fecha;
			cout << "Email: "; cin >> email;
			cout << "Red Social: "; cin >> redsocial;

			obj->at(pos - 1)->setNombre(nombre);
			obj->at(pos - 1)->setTelefono(telefono);
			obj->at(pos - 1)->setSexo(sexo);
			obj->at(pos - 1)->setFacultad(facultad);
			obj->at(pos - 1)->setFecha(fecha);
			obj->at(pos - 1)->setEmail(redsocial);
			break;
		case 4:
			obj->mostrar(); break;
		}
	}
	
	return 0;
}