#include <iostream>
// ʹ�ù�using����ʹ��cout��endl�ڳ����пɼ�
using namespace std;
int main()
{
	int start = 0, end = 0;
	cout << "Please input two num: ";
	cin >> start >> end;
	if (start <= end) {
		while (start <= end){
			cout << start << " ";
			++start;
		}
		cout << std::endl;
	}
	else{
		cout << "start should be smaller than end !!!";
	}
	system("pause");
	return 0;
}
