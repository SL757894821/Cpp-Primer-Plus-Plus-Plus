#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[80], str2[80];
	cout << "请输入两个字符串：" << endl;
	cin >> str1 >> str2;
	// 利用cstring头文件中定义的strcmp函数比较大小
	auto result = strcmp(str1, str2);
	switch (result)
	{
	case 1:
		cout << "第一个字符串大于第二个字符串" << endl;
		break;
	case -1:
		cout << "第一个字符串小于第二个字符串" << endl;
		break;
	case 0:
		cout << "两个字符串相等" << endl;
		break;
	default:
		cout << "未定义的结果" << endl;
		break;
	}
	system("pause");
	return 0;
}
