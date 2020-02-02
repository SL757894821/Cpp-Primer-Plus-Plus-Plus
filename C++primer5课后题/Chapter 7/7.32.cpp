#include <iostream>
#include <string>
using namespace std;

class Window_mgr
{
public:
	void clear();
};

class Screen
{
	friend void Window_mgr::clear();
private:
	unsigned width = 0, height = 0;
	unsigned cursor = 0;
	string contents;
public:
	Screen() = default;
	Screen(unsigned ht, unsigned wd, char c)
		:height(ht), width(wd), contents(ht*wd, c) { }
};

void Window_mgr::clear()
{
	Screen myScreen(10, 20, 'X');
	cout << "清理之前myScrean的内容是：" << endl;
	cout << myScreen.contents << endl;
	myScreen.contents = "";
	cout << "清理之后myScrean的内容是：" << endl;
	cout << myScreen.contents << endl;
}

int main()
{
	Window_mgr w;
	w.clear();
	system("pause");
	return 0;
}
