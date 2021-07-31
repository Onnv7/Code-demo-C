#ifndef _MATHFUNC_

#define _MATHFUNC_

#include "mylib.h"
#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
	static int x = 1;
	cout << x << "MATH\n";
	x++;
	return (max(a, b) > c) ? max(a, b) : c;
}

#endif 