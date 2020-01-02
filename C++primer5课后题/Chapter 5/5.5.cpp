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
		else if (g < 60)
		{
			letter = scores[0];
		}
		else
		{
			letter = scores[(g - 50) / 10];
			if (g != 100){
				if (g % 10 > 7){
					letter += "+";
				}
				else if (g % 10 < 3)
				{
					letter += "-";
				}
				else
				{
					letter += "";
				}
			}
		}
		cout << "等级成绩是：" << letter << endl;
	}
	system("pause");
	return 0;
}
