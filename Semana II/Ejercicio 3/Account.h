#pragma once
#include<iostream>
#include<string>

using namespace std;
class Account {
private:
	string holder;
	double amount;
public:
	Account(string holder) {
		this->holder = holder;
		amount = 0;
	}
	Account(string holder, double amount) {
		this->holder = holder;
		this->amount = amount;
	}
	void addMoney(double q) {
		if (q > 0) {
			amount += q;
		}
	}
	void removeMoney(double q) {
		amount -= q;
		if (amount < 0) {
			amount = 0;
		}
	}
	string getHolder() { return holder;}
	double getAmount() { return amount;}
	void setHolder(string value) {	holder = value;}
	void setAmount(double value) {	amount = value;}
};