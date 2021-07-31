#include "mylib.h"
#include "mathFunc.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "a, b, c = ";
	cin >> a >> b >> c;
	cout << max(a, b) << " " << max(b, c) << " " << max(a, c) << " " << max(a, b, c);
	return 0;
}