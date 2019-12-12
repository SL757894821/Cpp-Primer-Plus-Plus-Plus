#include <iostream>
int main(void)
{
	using namespace std;

	int a, b, sum = 0;

	cout << "Enter 2 integers to begin" << endl;
	cout << "Enter first integers: " << endl;
	cin >> a;
	cout << "Enter second integers: " << endl;
	cin >> b;

	for (int i = a; i <= b; ++i){
		sum += i;
	}

	cout << "Sum: " << sum << endl;

	system("pause");
	return 0;
}
