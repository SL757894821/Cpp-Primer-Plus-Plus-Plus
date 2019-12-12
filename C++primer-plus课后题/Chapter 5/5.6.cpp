#include <iostream>
#include <string>
const int month = 12;
const int year = 3;

int main()
{
	using namespace std;

	string months[month] = {
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"
	};

	int sale[year][month];
	int total = 0;
	for (int i = 0; i < year; ++i){
		cout << "Year " << i << ": " << endl;
		for (int j = 0; j < month; ++j){
			cout << "Enter sale for " << months[j] << ": ";
			cin >> sale[i][j];
			total += sale[i][j];
		}
	}
	cout << "The total of sales is " << total << endl;

	system("pause");
	return 0;
}
