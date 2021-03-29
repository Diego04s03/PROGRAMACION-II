#pragma once
#include<iostream>
#include<string>
using namespace std;

float IMC(int weight, float height) {
	float imc;

	imc = (weight / (height * height));

	return imc;
}

class Person {
private:
	string name;
	int age;
	string DNI;
	char gender;
	int weight;
	float height;
public:
	Person(){}
	Person(string n, int a, char g) {
		name = n;
		age = a;
		gender = g;
		weight = 0;
		height = 0;
		generateDNI();
	}
	Person(string n, int a, char g, int w, float h) {
		name = n;
		age = a;
		gender = g;
		weight = w;
		height = h;
		generateDNI();
	}

	int calculateIMC() {
		double result = weight / (height * height);
		if (result < 20) {
			return -1;
		}
		else if (result > 20 && result <= 25) {
			return 0;
		}
		else if (result > 25) {
			return 1;
		}
	}
	bool isOlder() {
		if (age > 18) return true;
		return false;
	}
	void checkGender() {
		if (gender != 'M' && gender != 'F') gender = 'M';
	}
	void toString() {
		cout << "\nName : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "DNI : " << DNI << endl;
		cout << "Gender : " << gender << endl;
		cout << "Weight : " << weight<< endl;
		cout << "Height : " << height<< endl<<endl;
	}
	void generateDNI(){
		for (int i = 0; i < 8; i++)
			DNI = DNI + to_string(rand() % 10);
	}

	void setName(string value) { name = value; }
	void setAge(int value) { age = value; }
	void setGender(char value) { gender = value; }
	void setWeight(int value) { weight = value; }
	void setHeight(float value) { height = value; }


};
