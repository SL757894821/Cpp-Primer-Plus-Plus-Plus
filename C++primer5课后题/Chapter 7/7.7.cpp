#include<iostream>
#include"Sales_data.h"
using namespace std;
int main(){
	Sales_data total, trans;
	cout << "�����뽻�׼�¼��ISBN����������ԭ�ۡ�ʵ���ۼۣ���" << endl;
	if (read(cin, total)){
		while (read(cin, trans))
		if (total.isbn() == trans.isbn()){
			total = add(total, trans);
		}
		else{
			print(cout, total);
			cout << endl;
			total = trans;
		}
		print(cout, total);
		cout << endl;
	}
	else{
		cerr << "û������" << endl;
		return -1;
	}
	system("pause");
	return 0;
}
