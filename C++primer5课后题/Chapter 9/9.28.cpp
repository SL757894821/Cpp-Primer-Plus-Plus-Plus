#include <iostream>
#include <string>
#include <forward_list>
using namespace std;
void test_and_insert(forward_list<string> &sflst, const string &s1, const string &s2)
{
	auto prev = sflst.before_begin();
	auto curr = sflst.begin();
	bool inserted = false;
	while (curr != sflst.end())
	{
		if (*curr == s1)
		{
			curr = sflst.insert_after(curr, s2);
			inserted = true;
		}
		prev = curr;
		++curr;
	}
	if (!inserted){
		sflst.insert_after(prev, s2);
	}
}
int main()
{
	forward_list<string> sflst = { "Hello", "!", "world", "!" };
	test_and_insert(sflst, "Hello", "ÄãºÃ");
	for (auto curr = sflst.begin(); curr != sflst.end(); curr++){
		cout << *curr << " ";
	}
	cout << endl;
	test_and_insert(sflst, "!", "?");
	for (auto curr = sflst.begin(); curr != sflst.end(); curr++){
		cout << *curr << " ";
	}
	cout << endl;
	test_and_insert(sflst, "Bye", "ÔÙ¼û");
	for (auto curr = sflst.begin(); curr != sflst.end(); curr++){
		cout << *curr << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
