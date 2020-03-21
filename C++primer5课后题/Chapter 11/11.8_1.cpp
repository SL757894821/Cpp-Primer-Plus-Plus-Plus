#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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
	vector<string> unique_word;
	string word;
	while (inFile >> word)
	{
		trans(word);
		if (find(unique_word.begin(), unique_word.end(), word) == unique_word.end())
			unique_word.push_back(word);
	}
	for (const auto &w : unique_word){
		cout << w << endl;
	}
	cout << endl;
	inFile.close();         // finished with the file

	system("pause");
	return 0;
}
