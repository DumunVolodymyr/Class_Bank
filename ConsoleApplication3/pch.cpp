#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

Bank::Bank(int d_credit, int d_number, string d_name, int _money, int _safes)
{
	credit = d_credit;
	number = d_number;
	name = d_name;
	money = _money;
	safes = _safes;
}
Bank::Bank() {

}

Bank::~Bank()
{
	cout << "Bank destruct" << endl;
}

string Bank::getName()
{
	return name;
}
int Bank::getCredit()
{
	return credit;
}
int Bank::getNumber()
{
	return number;
}

int Bank::getMoney()
{
	return money;
}

int Bank::getSafes()
{
	return safes;
};

