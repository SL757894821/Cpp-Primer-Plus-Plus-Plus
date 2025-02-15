#include <iostream>
#include <string>
#include <vector>
using namespace std;
void find_char(string &s, const string &chars)
{
	cout << "在" << s << "中查找" << chars << "中字符" << endl;
	string::size_type pos = 0;
	while ((pos = s.find_first_of(chars, pos)) != string::npos)
	{
		cout << "pos: " << pos << ",char: " << s[pos] << endl;
		pos++;
	}
}
int main()
{
	string s = "ab2c3d7R4E6";
	cout << "查找所有数字" << endl;
	find_char(s, "0123456789");
	cout << endl << "查找所有字母" << endl;
	find_char(s, "abcdefghijklmnopqrstuvwxyz" \
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	system("pause");
	return 0;
}
