#include <iostream>
using namespace std;
double myAdd(double val1, double val2){		// val1和val2是形参
	double result = val1 + val2;			// result是普通局部变量
	static unsigned iCnt = 0;				// iCnt是静态局部变量
	++iCnt;
	cout << "该函数已经累计执行了" << iCnt << "次" << endl;
	return result;
}
int main(){
	double num1, num2;
	cout << "请输入两个数：";
	while (cin >> num1 >> num2)
	{
		cout << num1 << "与" << num2 << "的求和结果是："
			<< myAdd(num1, num2) << endl;
	}

	system("pause");
	return 0;
}
