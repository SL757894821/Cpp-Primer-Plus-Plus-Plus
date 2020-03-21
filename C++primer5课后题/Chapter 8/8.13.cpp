#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct PersonInfo {
	string name;
	vector<string> phones;
};
bool valid(const string &s)
{
	return true;
}
string format(const string &s)
{
	return s;
}
int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	//if (argc != 2){
	//	cerr << "请给出输入、输出文件名" << endl;
	//	return -1;
	//}
	ifstream in("book_sales");
	if (!in){
		cerr << "无法打开输入文件" << endl;
		system("pause");
		return -1;
	}

	while (getline(in, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	ostringstream os;
	for (const auto &entry : people)
	{
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones){
			if (!valid(nums))
				badNums << " " << nums;
			else
				formatted << " " << format(nums);
		}
		if (badNums.str().empty())
			os << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << entry.name
			<< " invalid number(s) " << badNums.str() << endl;
	}
	cout << os.str() << endl;
	system("pause");
	return 0;
}
