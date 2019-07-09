#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double box, sideline, premium, ga;

	cout << "input number of box tickets: ";
	cin >> box;
	cout << "input number of sideline tickets: ";
	cin >> sideline;
	cout << "input number of premium tickets: ";
	cin >> premium;
	cout << "input number of ga tickets: ";
	cin >> ga;
	cout << "\n" << "Total for box tickets: " << setprecision(2) << fixed << box * 250 << endl;
	cout << "Total for sideline tickets: " << setprecision(2) << fixed << sideline * 200 << endl;
	cout << "Total for premium tickets: " << setprecision(2) << fixed << premium * 500 << endl;
	cout << "Total for Gen ad tickets: " << setprecision(2) << fixed << ga * 100 << endl;

	system("pause");
	return 0;
}