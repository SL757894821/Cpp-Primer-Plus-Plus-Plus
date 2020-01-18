#include <iostream>
using namespace std;
int fact(int i)
{
	if (i < 0)
		return -1;
	int sum = 0;
	sum = i > 1 ? i * fact(i - 1) : 1;

	return sum;
}
int main()
{
	int val, sum = 0;
	cin >> val;
	cout << val << " µÄ½×³ËÊÇ " << fact(val) << endl;

	system("pause");
	return 0;
}
