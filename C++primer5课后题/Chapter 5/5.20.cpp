#include <iostream>
#include <string>
using namespace std;
int main()
{
	string currString, preString;
	bool bl = true;
	cout << "请输入一组字符串：" << endl;
	while (cin >> currString)
	{
		if (currString == preString)
		{
			bl = false;
			cout << "连续出现的字符串是：" << currString << endl;
			break;
		}
		preString = currString;
	}
	if (bl)
		cout << "没有连续出现的字符串！" << endl;

	system("pause");
	return 0;
}
