#include <iostream>
using namespace std;

class MANG
{
private:
	int n;
	float* a;
public:
	void nhap();
	void xuat();
	float max();
	float min();
};
float MANG::min()
{
	float min = *(a);
	for (int i = 1; i < n; i++)
		if (*(a + i) < min)
			min = *(a + i);
	return min;
}
float MANG::max()
{
	float max = *(a);
	for (int i = 1; i < n; i++)
		if (*(a + i) > max)
			max = *(a + i);
	return max;
}
void MANG::xuat()
{
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
}
void MANG::nhap()
{
	cout << "\nNhap so luong phan tu: ";
	cin >> n;
	a = new float[n];
	cout << "\nNhap gia tri cac phan tu: ";
	for (int i = 0; i < n; i++)
		cin >> *(a + i);
}

int main()
{
	MANG x;
	x.nhap();
	x.xuat();
	cout << "\nMax = " << x.max();
	cout << "\nMin = " << x.min();
	return 0;
}