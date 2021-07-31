#include <iostream>
using namespace std;

int main()
{
	int cost[1000];
	// Cach 1:
	cost[2] = 100;
	cout << cost[2] << "\n";

	// Cach 2:
	int* p;
	p = cost;
	*(p + 2) = 100;
	cout << cost[2];
	system("pause");
	return 0;
}