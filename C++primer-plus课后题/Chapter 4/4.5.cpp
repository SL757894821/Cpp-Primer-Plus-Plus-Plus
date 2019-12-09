#include <iostream>
#include <string>
const int Strlen = 20;

struct CandyBar
{
	char brand[Strlen];
	double weight;
	int calorie;
};

int main()
{
	using namespace std;
	CandyBar snack = { "Mocha Munch", 2.3, 350 };

	cout << "Brand: " << snack.brand << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calorie: " << snack.calorie << endl;

	system("pause");
	return 0;
}
