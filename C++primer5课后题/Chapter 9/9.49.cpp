#include <iostream>
#include <string>
#include <vector>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
using namespace std;
void find_longest_word(ifstream &in){
	string s, longest_word;
	int max_length = 0;
	while (in >> s)
	{
		if (s.find_first_of("bdfghjklpqty") != string::npos)
			continue;
		cout << s << " ";
		if (max_length < s.size()){
			max_length = s.size();
			longest_word = s;
		}
	}
	cout << endl << "×î³¤×Ö·û´®£º" << longest_word << endl;
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
	find_longest_word(inFile);
	inFile.close();         // finished with the file

	system("pause");
	return 0;
}
