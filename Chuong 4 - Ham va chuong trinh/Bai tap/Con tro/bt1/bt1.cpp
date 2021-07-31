#include <iostream>
using namespace std;

int main()
{
	char ch;
	char* pc = &ch;

	// Cach 1:
	ch = 'A';
	cout << ch << *pc;

	//Cach 2:
	*pc = 'A';
	cout << *pc << ch;
	system("pause");
	return 0;
}