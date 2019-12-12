#include <iostream>

int main()
{
	using namespace std;

	cout << "Enter number of rows: ";
	int nrow;
	cin >> nrow;
	for (int i = 0; i < nrow; ++i){
		for (int j = 0; j < nrow - i - 1; ++j)
			cout << ".";
		for (int j = 0; j < i + 1; ++j)
			cout << "*";
		cout << endl;
	}

	system("pause");
	return 0;
}
