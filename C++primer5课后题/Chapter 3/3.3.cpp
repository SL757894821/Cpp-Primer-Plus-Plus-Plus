#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, line;
	cout << "��ѡ���ȡ�ַ����ķ�ʽ��1��ʾ��ʶ�ȡ��2��ʾ���ж�ȡ" << endl;
	char ch;
	cin >> ch;
	if (ch == '1')
	{
		cout << "�������ַ����� welcome to C++ family! " << endl;
		cin >> word;
		cout << "ϵͳ��ȡ����Ч�ַ����ǣ�" << endl;
		cout << word << endl;
		system("pause");
		return 0;
	}
	cin.clear();
	cin.sync();
	if (ch == '2')
	{
		cout << "�������ַ����� welcome to C++ family! " << endl;
		getline(cin, line);
		cout << "ϵͳ��ȡ����Ч�ַ����ǣ�" << endl;
		cout << line << endl;
		system("pause");
		return 0;
	}
	cout << "��������";
	system("pause");
	return -1;
}
