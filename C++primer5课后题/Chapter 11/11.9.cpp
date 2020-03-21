#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <list>
#include <sstream>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
using namespace std;
string &trans(string &s){
	for (int p = 0; p < s.size(); p++){
		if (s[p] >= 'A' && s[p] <= 'Z')
			s[p] -= ('A' - 'a');
		else if (s[p] == ',' || s[p] == '.')
			s.erase(p, 1);
	}
	return s;
}
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
	map<string, list<int>> word_lineno;
	string line;
	string word;
	int lineno = 0;
	while (getline(inFile, line))
	{
		lineno++;
		istringstream l_in(line);
		while (l_in >> word)
		{
			trans(word);
			word_lineno[word].push_back(lineno);
		}
	}
	for (const auto &w : word_lineno){
		cout << w.first << "ËùÔÚÐÐ";
		for (const auto &i : w.second)
			cout << i << " ";
		cout << endl;
	}
	inFile.close();         // finished with the file

	system("pause");
	return 0;
}
