#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "welcome to";
	char str2[] = "C++ family";
	// ����strlen�������������ַ����ĳ���
	// ����һ���ڴ����result�������볤��Ϊ��ý���ַ����ĳ���
	char *result = new char[strlen(str1) + strlen(str2) - 1];

	strcpy(result, str1);		// �ѵ�һ���ַ�������������ַ�����
	strcat(result, str2);		// �ѵڶ����ַ���ƴ�ӵ�����ַ�����

	cout << "��һ���ַ����ǣ�" << str1 << endl;
	cout << "�ڶ����ַ����ǣ�" << str2 << endl;
	cout << "ƴ�Ӻ���ַ����ǣ�" << result << endl;
	system("pause");
	return 0;
}
