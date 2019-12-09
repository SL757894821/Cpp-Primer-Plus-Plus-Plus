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
	CandyBar snack[3] = {
		{ "Mocha Munch1", 2.31, 351 },
		{ "Mocha Munch2", 2.32, 352 },
		{ "Mocha Munch3", 2.33, 353 }
	};

	for (int i = 0; i < 3; i++){
		cout << "Brand: " << snack[i].brand << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calorie: " << snack[i].calorie << endl;
	}

	system("pause");
	return 0;
}
