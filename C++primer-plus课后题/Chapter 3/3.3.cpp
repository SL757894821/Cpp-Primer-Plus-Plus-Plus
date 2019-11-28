#include <iostream>
using namespace std;
const int Sec_per_min = 60;
const int Min_per_du = 60;

int main()
{
	int degrees, minutes, seconds;
	cout << "Enter alatitude in degrees, minutes, and seconds: " << endl;

	cout << "First, enter the degrees: ";
	cin >> degrees;

	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;

	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	double total_degrees = double(degrees) + double(minutes) / double(Min_per_du) + double(seconds) / double(Sec_per_min);
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total_degrees << " degrees" << endl;

	system("pause");
	return 0;
}
