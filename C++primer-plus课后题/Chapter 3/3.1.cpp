#include <iostream>
using namespace std;
const double Inch_per_feet = 12.0L;

int main(void)
{
	cout << "Please enter your height:_____\b\b\b\b\b";
	double ht_inch;
	cin >> ht_inch;

	double ht_feet = ht_inch / Inch_per_feet;
	cout << "Your height is:" << ht_feet << " feets\n";

	system("pause");
	return 0;
}