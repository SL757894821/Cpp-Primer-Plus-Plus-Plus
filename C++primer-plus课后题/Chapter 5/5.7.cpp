#include <iostream>
#include <string>
using namespace std;

struct Car
{
	string producer;
	int year;
};

int main()
{
	cout << "How many cars do you wish to catalog? ";
	int ncar;
	(cin >> ncar).get();
	Car * cars = new Car[ncar];

	for (int i = 0; i < ncar; ++i){
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the maker: ";
		getline(cin, cars[i].producer);
		cout << "Please enter the year: ";
		(cin >> cars[i].year).get();
	}

	system("pause");
	return 0;
}
