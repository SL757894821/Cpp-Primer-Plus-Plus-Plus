#include <iostream>
using namespace std;
int main()
{
	short svalue = 32767;
	unsigned uivalue = 0;
	unsigned short usvalue = 65535;
	cout << ++svalue << endl;
	cout << --uivalue << endl;
	cout << ++usvalue << endl;

	system("pause");
	return 0;
}
