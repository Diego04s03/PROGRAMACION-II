#pragma once
#include<iostream>

using namespace std;

string continents[] = { "South America","Europe","Africa","North America","Asia" };

class Eclipse {
private:
	char	type;
	int		date;
	int		hour;
	bool	earthquakes;
	bool	rains;
	string	visible;
public:
	Eclipse() {
	}
	
	void setType(char value) { type = value; }
	void setDate(int value) { date = value; }
	void setType(int value) { hour = value; }
	void setEarthquakes(bool value) { earthquakes = value; }

	void report() {
		cout << "\nType of Eclipse: ";
		if (type == 'L') cout << "Lunar" << endl;
		if (type == 'S') cout << "Solar" << endl;
		cout << "Date: " << date << endl;
		cout << "hour: " << hour << endl;
		cout << "Earthquakes: ";
		if( earthquakes)cout<<"Yes" << endl;
		else cout << "No" << endl;
		cout << "Rains: "; 
		if (rains)cout << "Yes" << endl;
		else cout << "No" << endl;
		cout << "Continent with greater visibility: " << visible << endl;
	}
	void requestData() {
		int opt;
		cout << "Type of Eclipse: "; cin >> type;
		cout << "Date: "; cin >> date;
		cout << "hour: "; cin >> hour;
		cout << "Earthquakes(0: No / 1: Yes): "; cin >> earthquakes;
		cout << "Rains(0: No / 1: Yes): "; cin >> rains;
		cout << "Continent with greater visibility: " << endl;
		cout << "\t1. South America " << endl;
		cout << "\t2. Europe " << endl;
		cout << "\t3. Africa " << endl;
		cout << "\t4. North America " << endl;
		cout << "\t5. Asia " << endl;
		cout << "Choose a continent: "; cin >> opt;
		if (opt == 1) visible = continents[0];
		if (opt == 2) visible = continents[1];
		if (opt == 3) visible = continents[2];
		if (opt == 4) visible = continents[3];
		if (opt == 5) visible = continents[4];

		cout << endl;
	}
	void reportEclipseInNight() { if (hour >= 1700 && hour <= 2400) report();}
	void reportEclipseInEuropa() {	if (visible == continents[2]) report();}
	void reportEclipseEarthquakes() {if (earthquakes) report();}

};