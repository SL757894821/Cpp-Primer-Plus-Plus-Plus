#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string first_name, last_name, all_name;

	cout << "Enter your first name: ";
	getline(cin, first_name);
	cout << "Enter your last name: ";
	getline(cin, last_name);

	all_name = first_name + ", " + last_name;
	cout << "Here's the information in a single string: ";
	cout << all_name << endl;

	system("pause");
	return 0;
}
