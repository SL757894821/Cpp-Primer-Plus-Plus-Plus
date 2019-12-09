#include <iostream>
#include <array>
const int Strlen = 3;

int main()
{
	using namespace std;
	array<double, Strlen> grade;
	cout << "Please enter your grade: " << endl;
	double Allgrade = 0;

	for (int i = 0; i < 3; i++){
		cout << "Times" << i + 1 << ":";
		cin >> grade[i];
		Allgrade += grade[i];
		double average = Allgrade / (i + 1);
		cout << "The grade of average is: " << average << "s.\n";
		if (i < Strlen){
			cout << "Please enter your grade again\n" << endl;
		}
	}

	double average = Allgrade / Strlen;
	cout << "The finally grade of average is: " << average << "s.\n";

	system("pause");
	return 0;
}
