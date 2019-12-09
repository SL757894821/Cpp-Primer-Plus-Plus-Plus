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
	CandyBar * snack = new CandyBar[3];
	snack[0] = { "Mocha Munch1", 2.31, 351 };
	snack[1] = { "Mocha Munch2", 2.32, 352 };
	snack[2] = { "Mocha Munch3", 2.33, 353 };

	for (int i = 0; i < 3; i++){
		cout << "Brand: " << snack[i].brand << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calorie: " << snack[i].calorie << endl;
	}

	system("pause");
	return 0;
}
