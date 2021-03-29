#include<iostream>
#include"Account.h"

using namespace std;

int main() {

	Account* p = new Account("Diego");
	
	cout << "Holder: " << p->getHolder() << endl;
	cout << "Amount: " << p->getAmount() << endl;
	p->addMoney(360);
	cout << "Amount: " << p->getAmount() << endl;
	p->removeMoney(150);
	cout << "Amount: " << p->getAmount() << endl;

	cin.ignore();
	cin.get();
	return 0;
}
