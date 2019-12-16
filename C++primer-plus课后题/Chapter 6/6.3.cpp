#include<iostream>
using namespace std;
void showmenu();

int main()
{
	showmenu();
	char choice;

	do
	{
		cin >> choice;
		switch (choice)
		{
		case 'c': cout << "If you describe someone  as a carnvore, you are saying,\n";
			cout << "especially in a humorous way, that they eat meat.\n";
			break;
		case 'p': cout << "I want to be a pinoest.\n";
			break;
		case 't': cout << "A maple is a tree.\n";
			break;
		case 'g': cout << "I like playing computer game.\n";
			break;
		default: cout << "Please enter a c, p, t, or g: ";
		}

	} while ((choice != 'c') && (choice != 'p') && (choice != 't') && (choice != 'g'));

	system("pause");
	return 0;
}

void showmenu()
{
	cout << "Please enter one of the following choices:\n"
			"c) carnivore           p) pianist\n"
			"t) tree                g) game\n";
}
