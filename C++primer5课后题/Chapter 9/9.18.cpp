#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main()
{
	deque<string> sd;
	string word;
	while (cin >> word)
	{
		sd.push_back(word);
	}
	for (auto si = sd.cbegin(); si != sd.cend(); si++){
		cout << *si << endl;
	}

	system("pause");
	return 0;
}
