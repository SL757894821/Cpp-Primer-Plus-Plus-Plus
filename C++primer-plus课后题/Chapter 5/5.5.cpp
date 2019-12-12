#include <iostream>
#include <string>
const int month = 12;

int main()
{
	using namespace std;

	string months[month] = {
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"
	};

	int sale[month];
	int total = 0;
	for (int i = 0; i < month; ++i){
		cout << "Enter sale for " << months[i] << ": ";
		cin >> sale[i];
		total += sale[i];
	}
	cout << "The total of sales is " << total << endl;

	system("pause");
	return 0;
}
