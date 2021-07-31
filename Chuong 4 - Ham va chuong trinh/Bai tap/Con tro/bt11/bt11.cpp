#include <iostream>
using namespace std;
int main()
{
	int* A;
	int n;
	cin >> n;
	A = new int [n];
	for (int i = 0; i < n; i++)
		cin >> *(A + i);
	cout << "\n";
	for (int i = n - 1; i >= 0; i--)
		cout << *(A + i) << " ";
	delete[] A;
	system("pause");
	return 0;
}