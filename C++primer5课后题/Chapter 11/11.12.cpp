#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
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
	vector<pair<string, int>> data;
	string s;
	int v;
	while (inFile >> s && inFile >> v)
	{
		data.push_back(pair<string, int>(s, v));
	}
	for (const auto &d : data){
		cout << d.first << " " << d.second << endl;
	}
	inFile.close();         // finished with the file

	system("pause");
	return 0;
}
