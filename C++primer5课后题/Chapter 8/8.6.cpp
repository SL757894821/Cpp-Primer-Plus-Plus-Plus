#include<iostream>
#include<fstream>
#include"Sales_data.h"
using namespace std;
int main(){
	ifstream in("book_sales8");
	if (!in){
		cerr << "�޷��������ļ�" << endl;
		system("pause");
		return -1;
	}
	Sales_data total;				//������һ�����׼�¼�ı���
	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if (in >> total){
		Sales_data trans;			//����͵ı���
		//���벢����ʣ�ཻ�׼�¼
		while (in >> trans){
			//����������ڴ�����ͬ����
			if (total.isbn() == trans.isbn())
				total += trans;		//���������۶�
			else{
				//��ӡǰһ����Ľ��
				cout << total << endl;
				total = trans;		//total���ڱ�ʾ��һ��������۶�
			}
		}
		cout << total << endl;		//��ӡ���һ����Ľ��
	}
	else{
		//û�����룡�������
		cerr << "No data����" << endl;
		return -1; // ��ʾʧ��
	}
	system("pause");
	return 0;
}
