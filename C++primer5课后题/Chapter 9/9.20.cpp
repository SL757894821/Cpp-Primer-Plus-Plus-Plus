#include<iostream>
#include<deque>
#include<list>
#include<string>
using namespace std;
int main()
{
	list<int> ilist = { 1, 2, 3, 4, 5, 6, 7, 8 };
	deque<int> odd_d, even_d;

	for (auto iter = ilist.cbegin(); iter != ilist.cend(); iter++){
		if (*iter & 1){
			odd_d.push_back(*iter);
		}
		else{
			even_d.push_back(*iter);
		}
	}
	for (auto iter = odd_d.cbegin(); iter != odd_d.cend(); iter++){
		cout << *iter << " ";
	}
	cout << endl;
	for (auto iter = even_d.cbegin(); iter != even_d.cend(); iter++){
		cout << *iter << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
