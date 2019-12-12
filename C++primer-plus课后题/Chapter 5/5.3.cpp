#include <iostream>

int main()
{
	using namespace std;

	int ch, sum = 0;
	cout << "Enter an integer(0 to stop): ";
	cin >> ch;
	while (ch){
		sum += ch;
		cout << "Sum: " << sum << endl;
		cout << "Enter an integer(0 to stop): ";
		cin >> ch;
	}
	cout << "Bye" << endl;

	system("pause");
	return 0;
}
