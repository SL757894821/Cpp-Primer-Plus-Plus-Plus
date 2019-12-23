#include <iostream>
#include <string>

using namespace std;

int main()		// 使用cin一次读入一个词
{
	string s;
	// 循环读取，每次读入一整行，直至文件结束或遇到异常输入
	cout << "请输入单词，不可以包含空格：" << endl;
	while (cin >> s)
		cout << s << endl;		// 为了便于观察，输出每个单词后换行
	system("pause");
	return 0;
}
