
#include <string>
using namespace std;


class Bank
{
private:
	int credit, number;
	string name;
protected:
	int money, safes;
public:
	int workforce;
	string owner;
	Bank();

	Bank(int d_credit, int d_number, string d_name, int _money, int _safes);

	string getName();
	int getCredit();
	int getNumber();

	int getMoney();
	int getSafes();
	~Bank();
};
	
	
