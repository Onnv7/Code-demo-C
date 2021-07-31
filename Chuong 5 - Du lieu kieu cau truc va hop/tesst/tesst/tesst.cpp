#include <iostream>
using namespace std;
struct tu
{
	int : 8;
//	int x : 8;
	double z;
};
int main()
{
	tu a, b[12];
//	a.x =6345;
	cout << sizeof(b) << " " << sizeof(tu);
	return 0;
}