#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
double m, d, v;
	cout << "Please enter the mass in grams: ";
	cin >> m;
	cout << " Please enter the density in grams per cubic centimeter: ";
	cin >> d;

	v = m / (4 * d);

	cout << " the volume is..." << setprecision(2) << fixed << v << "cm^3"<<endl;


	system("pause");
	return 0;

}