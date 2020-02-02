#include<iostream>
#include"Sales_data.h"
using namespace std;
int main(){
	Sales_data total, trans;
	cout << "请输入交易记录（ISBN、销售量、原价、实际售价）：" << endl;
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
		cerr << "没有数据" << endl;
		return -1;
	}
	system("pause");
	return 0;
}
