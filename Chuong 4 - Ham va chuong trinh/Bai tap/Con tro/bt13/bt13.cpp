// không dùng mảng, hãy nhập một dãy số nguyên và in ngược dãy đã được sắp xếp
#include <iostream>
using namespace std;
int main()
{
	int* A;
	int n;
	cout << "Nhap so ptu: ";
	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> *(A + i);
	for (int i = 1; i < n; i++)
	{
		int key = A[i];
		int j = i - 1;
		while (key < A[j] && j >= 0)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = key;
	}
	for (int i = 0; i < n; i++)
		cout << *(A + i) << " ";
	delete[] A;
	system("pause");
	return 0;
}