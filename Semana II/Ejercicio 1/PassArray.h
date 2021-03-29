#pragma once
#include"Password.h"
class PassArray {
private:
	int N;
	Password* arr;
	Password* p;
public:
	PassArray() {
		N = rand() % 6 + 5;
		arr = new Password[N];
	}
	void generateData() {
		for (int i = 0; i < N; i++)
		{
			p = new Password();
			arr[i] = *p;
		}
	}
	void areTheySafe() {
		for (int i = 0; i < N; i++)
		{
			if (arr[i].isSafe()) cout << arr[i].getPassword() << " es V";
			else cout << arr[i].getPassword() << " es F";
			cout << endl;
		}
	}

};