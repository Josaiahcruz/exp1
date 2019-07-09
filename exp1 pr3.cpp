#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double bal, amount, day1, day2, avg, inter, inup;
	cout << "Enter current net balance.." << endl;
	cin >> bal;
	cout << "\nEnter payment.." << endl;
	cin >> amount;
	cout << "\nEnter days in billing cycle.." << endl;
	cin >> day1;
	cout << "\nEnter days before the billing cycle.." << endl;
	cin >> day2;
	cout << "\nEnter monthlty interest.." << endl;
	cin >> inter;

	avg = (bal * day1 - amount * day2) / day1;

	inup = (avg * inter);

	cout << "Current interest is: " << setprecision(3) << "P" << inup<<endl;

	system("pause");

	return 0;

}
