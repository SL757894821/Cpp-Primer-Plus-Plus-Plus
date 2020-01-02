#include <iostream>
using namespace std;
int main()
{
	unsigned vowelCnt = 0;
	char ch;
	cout << "请输入一段文本：" << endl;
	while (cin >> ch)
	{
		if (ch == 'a')
			++vowelCnt;
		else if (ch == 'e')
			++vowelCnt;
		else if (ch == 'i')
			++vowelCnt;
		else if (ch == 'o')
			++vowelCnt;
		else if (ch == 'u')
			++vowelCnt;
	}
	cout << "您输入的文本中共有 " << vowelCnt << " 个元音字母" << endl;
	system("pause");
	return 0;
}
