#include "pch.h"
#include "Bank.h"

Bank::Bank(int diner)
{
	money = diner;
}

Bank::~Bank()
{
}

void Bank::deposit(int mont)
{
	mont = money;
}


void Bank::retirar(int deb)
{
	deb = money - deb;
}

void Bank::imprimir(int cuenta)
{


}

