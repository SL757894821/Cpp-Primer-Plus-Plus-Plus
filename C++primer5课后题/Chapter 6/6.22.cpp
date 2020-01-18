#include <iostream>
using namespace std;
// 该函数既不交换指针，也不交换指针所指的内容
void SwapPointer1(int *p, int *q){
	int *temp = p;
	p = q;
	q = temp;
}
// 该函数交换指针所指的内容
void SwapPointer2(int *p, int *q){
	int temp = *p;
	*p = *q;
	*q = temp;
}
// 该函数交换指针本身的值，即交换指针所指的内存地址
void SwapPointer3(int &p, int &q){
	int tmp = p;
	p = q;
	q = tmp;
}
int main(){
	int a = 5, b = 10;
	int *p = &a, *q = &b;
	cout << "交换前：" << endl;
	cout << "p的值是：" << p << "，q的值是：" << q << endl;
	cout << "p所指的值是：" << *p << "，q所指的值是：" << *q << endl;
	SwapPointer1(p, q);
	cout << "交换后：" << endl;
	cout << "p的值是：" << p << "，q的值是：" << q << endl;
	cout << "p所指的值是：" << *p << "，q所指的值是：" << *q << endl;

	cout << endl;
	cout << "*********************************************************" << endl;
	cout << endl;

	int c = 5, d = 10;
	int *r = &c, *s = &d;
	cout << "交换前：" << endl;
	cout << "p的值是：" << r << "，q的值是：" << s << endl;
	cout << "p所指的值是：" << *r << "，q所指的值是：" << *s << endl;
	SwapPointer2(r, s);
	cout << "交换后：" << endl;
	cout << "p的值是：" << r << "，q的值是：" << s << endl;
	cout << "p所指的值是：" << *r << "，q所指的值是：" << *s << endl;

	cout << endl;
	cout << "*********************************************************" << endl;
	cout << endl;

	int e = 5, f = 10;
	int *x = &e, *y = &f;
	cout << "交换前：" << endl;
	cout << "p的值是：" << x << "，q的值是：" << y << endl;
	cout << "p所指的值是：" << *x << "，q所指的值是：" << *y << endl;
	//SwapPointer3(e, f);
	SwapPointer3(*x, *y);
	cout << "交换后：" << endl;
	cout << "p的值是：" << x << "，q的值是：" << y << endl;
	cout << "p所指的值是：" << *x << "，q所指的值是：" << *y << endl;

	system("pause");
	return 0;
}
