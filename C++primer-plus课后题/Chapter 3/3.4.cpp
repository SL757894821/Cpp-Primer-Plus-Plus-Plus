#include <iostream>
using namespace std;
const int Sec_per_min = 60;
const int Min_per_hour = 60;
const int Hour_per_day = 24;

int main(void)
{
	cout << "Enter the number of seconds: ";
	long long total_sec;
	cin >> total_sec;

	int sec = total_sec % Sec_per_min;
	int total_min = total_sec / Sec_per_min;

	int min = total_min % Min_per_hour;
	int total_hour = total_min / Min_per_hour;

	int hour = total_hour % Hour_per_day;
	int day = total_hour / Hour_per_day;

	cout << total_sec << " seconds = ";
	cout << day << "days, ";
	cout << hour << " hours, ";
	cout << min << " minutes, ";
	cout << sec << " seconds" << endl;

	system("pause");
	return 0;
}