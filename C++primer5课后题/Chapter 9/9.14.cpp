#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
int main()
{
	list<char*> slist = { "hello", "world", "!" };
	vector<string> svec;

	// 容器类型不同，不能直接赋值
	//	svec = slist;
	// 元素类型相容，可采用范围初始化
	svec.assign(slist.begin(), slist.end());

	cout << svec.capacity() << " " << svec.size() << " " <<
		svec[0] << " " << svec[svec.size() - 1] << endl;

	system("pause");
	return 0;
}
