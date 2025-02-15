#include<iostream>
#include<stdexcept>
using namespace std;
istream & f(istream & in){
	int v;
	while (in >> v, !in.eof())	// 直到遇到文件结束符才停止读取
	{
		if (in.bad())
			throw runtime_error("IO流错误");
		if (in.fail()){
			cerr << "数据错误，请重试：" << endl;
			in.clear();
			in.ignore(100, '\n');
			continue;
		}
		cout << v << endl;
	}
	in.clear();
	return in;
}

int main()
{
	cout << "请输入一些整数，按Ctrl+Z结束" << endl;
	f(cin);
	system("pause");
	return 0;
}
