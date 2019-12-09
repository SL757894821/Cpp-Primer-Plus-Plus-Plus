#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int ArSize = 20;
	string name;
	char dessert[ArSize];

	cout << "Enter your name:\n";
	getline(cin, name);  // reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	system("pause");
	return 0;
}
