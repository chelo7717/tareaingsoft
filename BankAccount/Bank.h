#pragma once
#include <iostream>
using namespace std;
class Bank
{
private:
	int money;
	int count;
public:
	Bank(int diner);
	~Bank();
	void deposit(int mont);
	void retirar(int deb);
	void imprimir(int cuenta);

};

