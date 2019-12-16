#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
	ifstream infile;
	infile.open("patron.txt");

	char ch;
	int count = 0;
	while (infile >> ch)
		count++;

	infile.close();

	// output
	cout << "There are " << count << " characters." << endl;

	system("pause");
	return 0;
}
