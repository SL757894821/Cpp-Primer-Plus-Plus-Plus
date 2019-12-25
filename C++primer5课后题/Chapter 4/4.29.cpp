#include <iostream> 
using namespace std;
int main()
{
	int x[10];
	int *p = x;
	cout << sizeof(x) << endl;
	cout << sizeof(*x) << endl;
	cout << sizeof(x) / sizeof(*x) << endl;

	cout << endl;
	cout << "********************" << endl;
	cout << endl;

	cout << sizeof(p) << endl;
	cout << sizeof(*p) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;

	system("pause");
	return 0;
}
