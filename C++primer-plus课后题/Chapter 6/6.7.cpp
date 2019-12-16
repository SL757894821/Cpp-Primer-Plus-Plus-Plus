#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
	cout << "Enter words (q to quit): \n";

	int vowel = 0, consonant = 0, others = 0;
	string ch;
	cin >> ch;
	while (ch != "q"){
		if (isalpha(ch[0]))//CharÓÃ¡®¡¯,stringÓÃ" "
		{
			switch (ch[0])
			{
				case 'a':
				case 'A':
					vowel++; 
					break;
				case 'e':
				case 'E':
					vowel++; 
					break;
				case 'i':
				case 'I':
					vowel++; 
					break;
				case 'o':
				case 'O':
					vowel++; 
					break;
				case 'u':
				case 'U':
					vowel++; 
					break;
				default:
					consonant++;
			}
		}
		else
			others++;
		cin >> ch;
	}
	cout << vowel << " words beginning with vowels\n" << consonant
		<< " words beginning with consonants\n" << others << " others\n";

	system("pause");
	return 0;
}
