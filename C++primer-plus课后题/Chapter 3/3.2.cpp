#include <iostream>
using namespace std;
const double Inch_per_feet = 12.0;
const double Meter_per_inch = 0.0254;
const double Pound_per_kilogram = 2.2;

int main(void)
{
	cout << "Eenter your height of feet:____\b\b\b\b";
	double ht_feet;
	cin >> ht_feet;

	cout << "Enter height of inch:____\b\b\b\b";
	double ht_inch;
	cin >> ht_inch;

	double ht_meter = (ht_feet*Inch_per_feet + ht_inch)*Meter_per_inch;

	cout << "Enter your weight in pound:____\b\b\b\b";
	double wt_pound;
	cin >> wt_pound;

	double wt_kilogram = wt_pound / Pound_per_kilogram;

	double BMI = wt_kilogram / ht_meter;
	cout << "BMI: " << BMI << endl;

	system("pause");
	return 0;
}