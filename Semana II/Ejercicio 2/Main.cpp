#include<iostream>
#include<time.h>
#include"Person.h"

using namespace std;

void Status(int imc) {
	if (imc == -1) {
		cout << "the person is overweight";
	}
	if (imc == 1) {
		cout << "the person is at a healthy weight";
	}
	if (imc == 0) {
		cout<<"the person is below their ideal weight";
	}
}


int main() {
	srand(time(NULL));
	int age, weight;
	string name;
	char gender;
	float height;

	cout << "Name: "; cin >> name;
	cout << "Age: "; cin >> age;
	cout << "Gender: "; cin >> gender;
	cout << "Weight: "; cin >> weight;
	cout << "Height: "; cin >> height;

	Person* p1 = new Person(name,age,gender,weight,height);
	p1->checkGender();	
	p1->toString();
	cout << "The person is legal: " << p1->isOlder()<<endl;
	Status(p1->calculateIMC());

	Person* p2 = new Person(name, age, gender); 
	p1->checkGender();
	p2->toString();
	cout << "The person is legal: " << p2->isOlder()<<endl;
	Status(p2->calculateIMC());

	Person* p3 = new Person();
	p3->setName("Diego");
	p3->setAge(18);
	p3->generateDNI();
	p3->setGender('M');
	p3->setWeight(60);
	p3->setHeight(1.7);

	p1->checkGender();
	p3->toString();
	cout << "The person is legal: " << p3->isOlder() << endl;
	Status(p3->calculateIMC());

	
	
	

	cin.ignore();
	cin.get();
	return 0;
}
