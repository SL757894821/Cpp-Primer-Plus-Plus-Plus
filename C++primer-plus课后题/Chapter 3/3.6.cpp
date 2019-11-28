#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the distance(kilometers):";
	double dis;
	cin >> dis;

	cout << "Enter volume of gasoline(liter):";
	double gas;
	cin >> gas;

	double Fuel_cons = double(gas) / double(dis) * 100.0;
	cout << "You can use " << Fuel_cons << " liters per 100 kilometers" << endl;

	system("pause");
	return 0;
}
