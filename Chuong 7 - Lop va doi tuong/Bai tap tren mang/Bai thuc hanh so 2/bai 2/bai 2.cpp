#include <iostream>
using namespace std;

class MANG
{
private:
	int n;
	int* a;
public:
	void nhap();
	void xuat();
	void sapxep();
};
void MANG::sapxep()
{
	// sap xep chen
	for (int i = 1; i < n; i++)
	{
		int key = *(a + i);
		int j = i-1;
		while (key < *(a + j) && j >= 0)
		{
			*(a + j + 1) = *(a + j);
			j--;
		}
		*(a + j + 1) = key;
	}
}
void MANG::xuat()
{
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
}
void MANG::nhap()
{
	cout << "\nNhap so luong mang: ";
	cin >> n;
	a = new int[n];
	cout << "\nNhap cac gia tri: ";
	for (int i = 0; i < n; i++)
		cin >> *(a + i);
}

int main()
{
	MANG x;
	x.nhap();
	x.sapxep();
	x.xuat();
	return 0;
}