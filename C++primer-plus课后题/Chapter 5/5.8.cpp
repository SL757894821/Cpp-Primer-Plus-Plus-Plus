#include <iostream>
#include <cstring>
const int StrLen = 20;

int main()
{
	using namespace std;

	char word[StrLen];
	cout << "Enter words (to stop, type the word done):" << endl;
	int sum = 0;
	cin >> word;
	while (strcmp(word, "done"))
	{
		sum++;
		cin >> word;
	}
	cout << "You entered a total of " << sum << " words." << endl;

	system("pause");
	return 0;
}
