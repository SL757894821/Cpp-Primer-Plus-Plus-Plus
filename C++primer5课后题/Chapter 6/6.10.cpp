#include <iostream>
using namespace std;
// 在函数体内部通过解引用操作改变指针所指的内容
void mySwap(int *p, int *q){
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
int main(){
	int a = 5, b = 10;
	int *r = &a, *s = &b;
	cout << "交换前：a = " << a << "，b = " << b << endl;
	// 指针形参
	mySwap(r, s);
	// 引用形参（建议）
	// mySwap(&a, &b);
	cout << "交换后：a = " << a << "，b = " << b << endl;

	system("pause");
	return 0;
}
