#include<iostream>
using namespace std;
const int strsize = 20;
const int number = 5;
void showmenu();
void diplay_fullname();
void diplay_title();
void diplay_bopname();
void diplay_perference();

struct bop{
	char fullname[strsize];	//real name
	char title[strsize];	//job title
	char bopname[strsize];	//secret BOP name
	int perference;			//0 = fullname, 1 = title, 2 = bopname
};

//对结构数组进行初始化    
bop people[number] = {
	{
		"Wimp Macho",
		"BOSS",
		"WM",
		0
	},
	{
		"Raki Rhodes",
		"Manager",
		"Junior Programmer",
		2
	},
	{
		"Celia Laiter",
		"MIPS",
		"CL",
		1
	},
	{
		"Hoppy Hipman",
		"Analyst Trainee",
		"AT",
		1
	},
	{
		"Pat Hand",
		"Student",
		"LOOPY",
		2
	}
};

int main()
{
	//get data and report   
	showmenu();
	char choice;
	cout << "Enter your choice: ";
	do
	{
		cin >> choice;
		switch (choice)
		{
		case 'a': diplay_fullname();
			break;
		case 'b': diplay_title();
			break;
		case 'c': diplay_bopname();
			break;
		case 'd': diplay_perference();
			break;
		}
		if (choice != 'q')
			cout << "Next choice: ";

	} while (choice != 'q');

	cout << "Bye!" << endl;

	system("pause");
	return 0;
}

//定义函数 
void showmenu()
{
	cout << "Benevolent Order of Programmers report\n"
		"a. display by name     b. display by title\n"
		"c. display by bopname  d. display by preference\n"
		"q. quit\n";
}

void diplay_fullname()
{
	for (int i = 0; i < number; i++)
		cout << people[i].fullname << endl;
}

void diplay_title()
{
	for (int i = 0; i < number; i++)
		cout << people[i].title << endl;
}

void diplay_bopname()
{
	for (int i = 0; i < number; i++)
		cout << people[i].bopname << endl;
}

void diplay_perference()
{
	for (int i = 0; i < number; i++)
	{
		if (people[i].perference == 0)
			cout << people[i].fullname << endl;
		if (people[i].perference == 1)
			cout << people[i].title << endl;
		if (people[i].perference == 2)
			cout << people[i].bopname << endl;
	}
}
