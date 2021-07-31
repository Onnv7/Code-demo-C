// khong
#include <iostream>
using namespace std;
int main()
{
	int c = 5;
	int* p = &c;
	int* q = &c;
	*p = *q + 1; // tat ca dau bang 6
	cout << "c = " << c << "\n";
	cout << "*p = " << *p << "\n";
	cout << "*q = " << *q << "\n";
	system("pause");
	return 0;
}