#include <iostream>
#include <string>

using namespace std;

int main()		// 使用getline一次读入一整行
{
	string s;
	// 循环读取，每次读入一整行，直至文件结束或遇到异常输入
	cout << "请输入字符串，可以包含空格：" << endl;
	while (getline(cin, s))
		cout << s << endl;
	system("pause");
	return 0;
}
