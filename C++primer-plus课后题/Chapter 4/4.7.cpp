#include <iostream>
#include <string>
using namespace std;

struct WilliamWingate
{

	string company;
	double diameter;
	double weight;
};

int main()
{
	WilliamWingate pizza;
	cout << "Enter company name: ";
	getline(cin, pizza.company);
	cout << "Enter diameter of pizza: ";
	cin >> pizza.diameter;
	cout << "Enter weight of pizza: ";
	cin >> pizza.weight;

	cout << "Company:: " << pizza.company << endl;
	cout << "Diameter: " << pizza.diameter << endl;
	cout << "Weight: " << pizza.weight << endl;

	system("pause");
	return 0;
}
