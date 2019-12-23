#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "请输入一个字符串，可以包含空格：" << endl;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = 'X';
	}
	cout << s << endl;
	system("pause");
	return 0;
}
