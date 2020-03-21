#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
using namespace std;
int main()
{
	char filename[20];
	cout << "Enter name of data file: ";
	cin.getline(filename, 20);
	ifstream inFile;        // object for handling file input
	inFile.open(filename);  // associate inFile with a file
	if (!inFile.is_open())  // failed to open file
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		// cin.get();    	// keep window open
		exit(EXIT_FAILURE);
	}
	map<string, size_t> word_count;
	string word;
	while (inFile >> word)
	{
		++word_count[word];
	}
	for (const auto &w : word_count){
		cout << w.first << "出现了" << w.second << "次" << endl;
	}
	inFile.close();         // finished with the file

	system("pause");
	return 0;
}
