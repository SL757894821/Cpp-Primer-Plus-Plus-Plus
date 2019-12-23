#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vString;		// 元素类型为string的vector对象
	string s;
	char cont = 'y';			// 与用户交互，决定是否继续输入
	cout << "请输入第一个词：" << endl;
	while (cin >> s)
	{
		vString.push_back(s);	// 向vector对象中添加元素
		cout << "要继续嘛（y or n）？" << endl;
		cin >> cont;
		if (cont != 'y' && cont != 'Y')
			break;
		cout << "请输入下一个词：" << endl;
	}
	cout << "请输入下一个词：" << endl;
	for (auto &mem : vString)
	{
		for (auto &c : mem)
			c = toupper(c);
		cout << mem << endl;
	}
	system("pause");
	return 0;
}
