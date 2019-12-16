#include<iostream>
using namespace std;
const int namesize = 20;
const double stand = 10000.0;

struct patron{
	char name[namesize];
	double money;
};

int main()
{
	//动态数组 
	int count;
	cout << "Enter the number of patrons:" << endl;
	cin >> count;
	cin.get();
	patron * peoplelist = new patron[count];

	//输入数据  
	cout << "Enter the patrons：" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "Patrons name:";
		cin.getline(peoplelist[i].name, namesize);
		cout << "donation:";
		cin >> peoplelist[i].money;
		cin.get();
	}

	//输出数据
	cout << "\n******************" << endl;

	int n = 0;
	cout << "\nGrand Patrons: " << endl;
	for (int i = 0; i < count; i++){
		if (peoplelist[i].money > stand)
		{
			cout << "Patrons name: " << peoplelist[i].name << endl;
			cout << "donation: " << peoplelist[i].money << endl;
			n++;
		}
	}
	if (n == 0)
		cout << "none";

	int m = 0;
	cout << "\nPatrons: " << endl;
	for (int i = 0; i < count; i++){
		if (peoplelist[i].money <= stand){
			cout << "Patrons name: " << peoplelist[i].name << endl;
			cout << "donation: " << peoplelist[i].money << endl;
			m++;
		}
	}
	if (m == 0)
		cout << "none";

	delete peoplelist;

	system("pause");
	return 0;
}
