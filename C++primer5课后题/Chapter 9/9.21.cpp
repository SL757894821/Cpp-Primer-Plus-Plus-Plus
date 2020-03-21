#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> svec;
	string word;
	auto iter = svec.begin();
	while (cin >> word)
	{
		svec.insert(iter, word);
	}
	for (auto iter = svec.cbegin(); iter != svec.cend(); iter++){
		cout << *iter << endl;
	}

	system("pause");
	return 0;
}
