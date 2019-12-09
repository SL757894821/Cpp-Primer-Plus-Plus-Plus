#include <iostream>
#include <cstring>
const int Strlen = 20;

int main()
{
	using namespace std;
	char first_name[Strlen];
	char last_name[Strlen];
	char all_name[Strlen];

	cout << "Enter your first name: ";
	cin.getline(first_name, Strlen);
	cout << "Enter your last name: ";
	cin.getline(last_name, Strlen);

	strcpy(all_name, first_name);
	strcat(all_name, ", ");
	strcat(all_name, last_name);

	cout << "Here's the information in a single string: ";
	cout << all_name << endl;

	system("pause");
	return 0;
}
