#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	cout << "请输入您的成绩：" << endl;
	for (int g; cin >> g;)
	{
		string letter;
		if (g < 0 || g > 100)
		{
			cout << "该成绩不合法！！！" << endl;
			continue;
		}
		letter = (g < 60) ? scores[0] : scores[(g - 50) / 10];
		letter += (g == 100 || g < 60) ? "" : g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
		cout << "等级成绩是：" << letter << endl;
	}
	system("pause");
	return 0;
}
