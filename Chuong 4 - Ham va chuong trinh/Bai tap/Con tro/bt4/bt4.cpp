//answer: *q = *p = c = 6
#include <iostream>
using namespace std;
int main()
{
	int c = 5;
	int* p = &c, * q = &c;
	*p = *q + 1;
	cout << c << *p << *q;
	system("pause");
	return 0;
}