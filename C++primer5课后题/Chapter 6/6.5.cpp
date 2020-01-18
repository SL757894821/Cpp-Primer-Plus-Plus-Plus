#include <iostream>
#include <cmath>
using namespace std;
double myABS(double val)
{
	if (val < 0)
		return val * -1;
	else
		return val;
}
double sysABS(double val)
{
	return abs(val);
}
int main()
{
	double num;
	cout << "请输入一个数：";
	cin >> num;
	cout << num << " 的 myABS 绝对值是 " << myABS(num) << endl;
	cout << num << " 的 sysABS 绝对值是 " << sysABS(num) << endl;

	system("pause");
	return 0;
}
