#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
void add_child(multimap<string, string> &families,
	const string &family, const string &child){
	families.insert({ family, child });
}
int main(){
	multimap<string, string> families;
	add_child(families, "��", "ǿ");
	add_child(families, "��", "��");
	add_child(families, "��", "��");
	for (auto f : families){
		cout << f.first << "�ҵĺ��ӣ�" << f.second << endl;
	}
	system("pause");
	return 0;
}
