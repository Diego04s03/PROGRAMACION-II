#include<iostream>
#include<time.h>
#include"PassArray.h"

using namespace std;

int main() {
	srand(time(NULL));

	PassArray* p = new PassArray();

	p->generateData();
	p->areTheySafe();

	cin.ignore();
	cin.get();
	return 0;
}
