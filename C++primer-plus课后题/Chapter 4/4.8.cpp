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
	WilliamWingate * p = new WilliamWingate;
	cout << "Enter diameter of pizza: ";
	cin >> p->diameter;
	cin.get();
	cout << "Enter company name: ";
	getline(cin, p->company);
	cout << "Enter weight of pizza: ";
	cin >> p->weight;

	cout << "Diameter: " << p->diameter << endl;
	cout << "Company:: " << p->company << endl;
	cout << "Weight: " << p->weight << endl;

	system("pause");
	return 0;
}
