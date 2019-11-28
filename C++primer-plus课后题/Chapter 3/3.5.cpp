#include <iostream>
using namespace std;

int main()
{
	long long world_pop, us_pop;
	cout << "Enter the world's population: ";
	cin >> world_pop;

	cout << "Enter the population of the us: ";
	cin >> us_pop;

	double rate = double(us_pop) / double(world_pop);;
	cout << "The population of the US is ";
	cout << rate * 100.0;
	cout << "% of the world population." << endl;

	system("pause");
	return 0;
}
