#include <iostream>
#include <string>
#include <vector>
using namespace std;
void input_string(string &s){
	s.reserve(100);
	char c;
	while (cin >> c)
	{
		s.push_back(c);
	}
}
int main()
{
	string s;
	input_string(s);
	cout << s << endl;

	system("pause");
	return 0;
}
