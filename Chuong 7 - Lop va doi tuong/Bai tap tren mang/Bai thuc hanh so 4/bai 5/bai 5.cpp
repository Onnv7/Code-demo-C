#include <iostream>
using namespace std;

class ARRAY
{
private:
	int* A;
	int n;
public:
	void nhap();
	void xuat();

	ARRAY();
	ARRAY(int k);
	~ARRAY();
};
ARRAY::~ARRAY()
{
	n = 0;
	delete[] A;
}
ARRAY::ARRAY(int k)
{
	n = k;
	A = new int[n];
	for (int i = 0; i < n; i++)
		*(A + i) = 0;
}
ARRAY::ARRAY()
{
	n = 0;
	delete[] A;
}
void ARRAY::xuat()
{
	for (int i = 0; i < n; i++)
		cout << "A[" << i + 1 << "] = " << *(A + i) << endl;
}
void ARRAY::nhap()
{
	cout << "\nNhap so phan tu: ";
	cin >> n;
	if (A == NULL)
		A = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i + 1 << "] = ";
		cin >> *(A + i);
	}
}
int main()
{
	ARRAY a;
	a.xuat();
	cout << endl;
	ARRAY b(5);
	b.xuat();
	cout << endl;
	ARRAY c;
	c.nhap();
	c.xuat();
	c.~ARRAY();
	c.nhap();
	c.xuat();
	return 0;
}