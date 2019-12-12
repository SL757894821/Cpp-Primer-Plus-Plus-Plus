#include <iostream>

int main()
{
	using namespace std;

	double daphne = 100.0;
	double cleo = 100.0;
	int year = 0;
	while (cleo <= daphne)
	{
		daphne += 10;
		cleo *= 1.05;
		year += 1;
	}
	cout << year << " years later, " << endl;
	cout << "Daphne has $" << daphne << endl;
	cout << "Cleo has $" << cleo << endl;

	system("pause");
	return 0;
}
