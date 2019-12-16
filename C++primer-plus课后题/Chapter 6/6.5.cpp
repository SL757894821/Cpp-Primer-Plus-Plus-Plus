#include<iostream>
using namespace std;
const int tax1 = 5000;
const double interest1 = 0.1;
const int tax2 = 15000;
const double interest2 = 0.15;
const int tax3 = 35000;
const double interest3 = 0.2;
double tax(int);

int main()
{
	int n;
	double money;

	do{
		cout << "Enter your income: ";
		cin >> n;
		money = tax(n);
		if (n > 0)
			cout << "The tax is: " << money << " tvarps" << endl;
	} while (n > 0);

	system("pause");
	return 0;
}

double tax(int n){
	double index;
	if (n <= tax1)
		index = n * 0;
	else if (n> tax1 && n <= tax2)
		index = (n - tax1)*interest1;
	else if (n> tax2 && n <= tax3)
		index = (n - tax2)*interest2 + (tax2 - tax1)*interest1;
	else
		index = (n - tax3)*interest3 + (tax3 - tax2)*interest2 + (tax2 - tax1)*interest1;
	return index;
}