#include<iostream>
#include<sstream>
#include<string>
#include<stdexcept>
using namespace std;
istream & f(istream & in){
	string v;
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
	ostringstream msg;
	msg << "C++ Primer 第五版" << endl;
	istringstream in(msg.str());
	f(in);
	system("pause");
	return 0;
}
