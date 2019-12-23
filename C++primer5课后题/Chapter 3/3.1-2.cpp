#include <iostream>
// 使用过using声明使得cout和endl在程序中可见
using namespace std;
int main()
{
	int val = 10;
	while (val >= 0){
		cout << val << " ";
		val--;
	}
	cout << endl;
	system("pause");
	return 0;
}
