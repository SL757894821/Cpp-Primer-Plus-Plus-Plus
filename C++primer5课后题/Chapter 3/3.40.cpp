#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "welcome to";
	char str2[] = "C++ family";
	// 利用strlen函数计算两个字符串的长度
	// 定义一个内存变量result，并申请长度为求得结果字符串的长度
	char *result = new char[strlen(str1) + strlen(str2) - 1];

	strcpy(result, str1);		// 把第一个字符串拷贝到结果字符串中
	strcat(result, str2);		// 把第二个字符串拼接到结果字符串中

	cout << "第一个字符串是：" << str1 << endl;
	cout << "第二个字符串是：" << str2 << endl;
	cout << "拼接后的字符串是：" << result << endl;
	system("pause");
	return 0;
}
