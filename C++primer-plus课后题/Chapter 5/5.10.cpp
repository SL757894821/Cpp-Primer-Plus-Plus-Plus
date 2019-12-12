#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "Enter number of rows: ";
	int nrow;
	cin >> nrow;
	for (int i = 0; i < nrow; ++i){
		for (int j = 0; j < nrow; ++j){
			if (i + 2 > nrow - j){
				cout << "*";
			}
			else{
				cout << ".";
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
