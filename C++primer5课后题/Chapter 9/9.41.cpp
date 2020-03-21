#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<char> vc = { 'H', 'E', 'L', 'L', 'O' };
	string s(vc.data(), vc.size());
	cout << s << endl;

	system("pause");
	return 0;
}
