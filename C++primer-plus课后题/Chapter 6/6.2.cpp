#include <iostream>
using namespace std;
const int MaxSize = 10;

int main(void)
{
	cout << "Enter donation(non-number to stop): ";
	double donation[MaxSize];
	double sum = 0.0, avg;
	for (int i = 0; (i < MaxSize) && (cin >> donation[i]); ++i)
	{
		cout << "donation #" << i + 1 << "£º";
		sum += donation[i];
		avg = sum / (i + 1);
		cout << "Average = " << avg << endl;
	}
	cout << "Number larger than average:" << endl;
	for (int i = 0; i < MaxSize; ++i)
	{
		if (donation[i] > avg)
			cout << donation[i] << " ";
	}

	system("pause");
	return 0;
}
