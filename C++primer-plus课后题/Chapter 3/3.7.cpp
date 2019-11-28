#include <iostream>
using namespace std;
const double miles_per_km = 0.6214;
const double liter_per_gallon = 3.875;

int main()
{
	cout << "Enter the Fuel consumption(liters per 100 kilometers):";
	double Fuel_cons_EU;
	cin >> Fuel_cons_EU;

	double Fuel_cons_US;
	Fuel_cons_US = int(100 / (Fuel_cons_EU / miles_per_km / liter_per_gallon));
	cout << Fuel_cons_EU << "L/100km approximate " << Fuel_cons_US << "mpg." << endl;


	system("pause");
	return 0;
}
