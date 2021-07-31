
#ifndef _MYLIB_

#define _MYLIB_

#include <iostream>
using namespace std;
int max(int a, int b)
{
	static int x = 1;
	cout << x << "LIB\n";
	x++;
	return (a > b ? a : b);
}

#endif