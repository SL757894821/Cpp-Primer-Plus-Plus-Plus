#include <iostream>
using namespace std;
int main(int argc, char **argv){
	for (int i = 0; i != argc; ++i){
		cout << "argc[" << i << "]£º" << argv[i] << endl;
	}

	system("pause");
	return 0;
}
