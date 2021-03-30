#pragma once
#include"Eclipse.h"

class EclipsesArray {
private:
	int* N;
	Eclipse* e;
public:
	EclipsesArray(int value) {
		N = new int(value);
		e = new Eclipse[*N];
	}
	int getN() {
		return *N;
	}
	void generateData() {
		cout << "\n======================" << endl << endl;
		for (int i = 0; i < *N; i++)
		{
			cout << "Eclipse " << i + 1 << endl;
			e[i].requestData();
		}
		cout << "Successfully Registered" << endl;
		cout << "======================" << endl << endl;
	}
	void printData() {
		for (int i = 0; i < *N; i++)
		{
			e[i].report();
		}
	}
	void eraseDataPosition(int pos) {
			Eclipse* aux = new Eclipse[*N - 1];
			for (int i = 0; i < pos; i++)
				aux[i] = e[i];

			for (int i = pos; i < *N; i++)
				aux[i - 1] = e[i];

			*N -= 1;
			e = aux;
			
	}
	void modifyData(int pos) {
		if (pos > 0 && pos <= *N) {

		}
		for (int i = 0; i < *N; i++)
			if (i == pos - 1) e[i].requestData();
	}
	void printReportEclipseNight() {
		for (int i = 0; i < *N; i++)
			e[i].reportEclipseInNight();
	}
	void printReportEclipseEuropa() {
		for (int i = 0; i < *N; i++)
			e[i].reportEclipseInEuropa();
	}
	void printReportEclipseEarthquakes() {
		for (int i = 0; i < *N; i++)
			e[i].reportEclipseEarthquakes();
	}

};