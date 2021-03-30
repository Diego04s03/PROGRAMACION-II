#include<iostream>
#include<ctime>

#include"EclipsesArray.h";

using namespace std;

int main() {
	srand(time(NULL));

	int pos, opc;
	int N;
	EclipsesArray* p1;

	cout << "======= Sistema de Registro de Eclipses =======" << endl;
	cout << "\n1. Registrar Eclipse "<<endl;
	cout << "2. Modificar Eclipse " << endl;
	cout << "3. Eliminar Eclipse " << endl;
	cout << "4. Reporte " << endl;
	cout << "5. Reporte de Eclipses visibles en Europa " << endl;
	cout << "6. Reporte de Eclipses con Sismos " << endl;
	cout << "7. Reporte de Eclipses en la Noche " << endl;
	cout << "0. Salir" << endl;
	do
	{
		cout << "\nDigite la opcion: "; cin >> opc;
		if (opc == 1) {
			do
			{
				cout << "Digite la cantidad de eclipses a registrar: "; cin >> N;
			} while (!(N> 0));
			
			p1 = new EclipsesArray(N);
			p1->generateData();
		}
		if (opc == 2) {
			do
			{
				cout << "Digite el numero de Eclipse a modificar: "; cin >> pos;

			} while (!(pos > 0 && pos <= p1->getN() )); 
			    p1->modifyData(pos);
		}
		if (opc == 3) {
			do{

			cout << "Digite el numero de Eclipse a eliminar: "; cin >> pos;

			} while (!(pos > 0 && pos <= p1->getN() ));

			p1->eraseDataPosition(pos);
		}
		if (opc == 4) {
			p1->printData();
		}
		if (opc == 5) { p1->printReportEclipseEuropa();  }
		if (opc == 6) { p1->printReportEclipseEarthquakes(); }
		if (opc == 7) { p1->printReportEclipseNight(); }

	} while (!(opc == 0));
	

	
	cin.ignore();
	cin.get();
	return 0;
}
