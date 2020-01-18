#include <iostream>
using namespace std;
void reset(int &i){
	i = 0;
}
int main(){
	int num = 5;
	cout << "重置前：num = " << num << endl;
	reset(num);
	cout << "重置前：num = " << num << endl;

	system("pause");
	return 0;
}
