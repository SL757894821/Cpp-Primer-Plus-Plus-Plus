#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
	list<string> sl;
	string word;
	while (cin >> word)
	{
		sl.push_back(word);
	}
	for (auto si = sl.cbegin(); si != sl.cend(); si++){
		cout << *si << endl;
	}

	system("pause");
	return 0;
}
