#include "pch.h"
#include <string>
#include <iostream>

using namespace std;


int main() 
	{
		Bank bank(30, 25, "MyBank", 21, 13);
		Bank bank2(18, 17, "Privat", 10, 10);
		Bank bank3(14, 28, "Aval", 25, 15);
		bank.workforce = 123;
		bank2.workforce = 68;
		bank3.workforce = 141;
		bank.owner = "Volodya";
		bank2.owner = "Max";
		bank3.owner = "Solomia";
		
		cout << " Workforce- " << bank.workforce << " Owner- " << bank.owner
			<< " Kvk- " << bank.getKvk() << " Nazva- " << bank.getNazva()
			<< " Number- " << bank.getNumber() << " Money- " << bank.getMoney() 
			<< " Safes-" << bank.getSafes() << endl;
		cout << " Workforce- " << bank2.workforce << " Owner- " << bank2.owner
			<< " Kvk- " << bank2.getKvk() << " Nazva- " << bank2.getNazva()
			<< " Number- " << bank2.getNumber() << " Money- " << bank2.getMoney() 
			<< " Safes-" << bank2.getSafes() << endl;
		cout << " Workforce- " << bank3.workforce << " Owner- " << bank3.owner
			<< " Kvk- " << bank3.getKvk() << " Nazva- " << bank3.getNazva()
			<< " Number- " << bank3.getNumber() << " Money- " << bank3.getMoney() 
			<< " Safes-" << bank3.getSafes() << endl;
		return 0;

}