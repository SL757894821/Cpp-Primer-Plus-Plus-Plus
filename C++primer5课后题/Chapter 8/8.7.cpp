#include<iostream>
#include<fstream>
#include"Sales_data.h"
using namespace std;
int main(){
	/*if (argc != 3){
	cerr << "请给出输入、输出文件名" << endl;
	return -1;
	}*/
	ifstream in("book_sales8");
	if (!in){
		cerr << "无法打开输入文件" << endl;
		system("pause");
		return -1;
	}
	ofstream out("makefile.txt");
	if (!out){
		cerr << "无法打开输出文件" << endl;
		system("pause");
		return -1;
	}
	Sales_data total;				//保存下一条交易记录的变量
	//读入第一条交易记录，并确保有数据可以处理
	if (in >> total){
		Sales_data trans;			//保存和的变量
		//读入并处理剩余交易记录
		while (in >> trans){
			//如果我们仍在处理相同的书
			if (total.isbn() == trans.isbn())
				total += trans;		//更新总销售额
			else{
				//打印前一本书的结果
				out << total << endl;
				cout << total << endl;
				total = trans;		//total现在表示下一本书的销售额
			}
		}
		out << total << endl;
		cout << total << endl;		//打印最后一本书的结果
	}
	else{
		//没有输入！警告读者
		cerr << "No data？！" << endl;
		return -1; // 表示失败
	}
	system("pause");
	return 0;
}
