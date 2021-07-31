#include <iostream>
#include <cmath>
using namespace std;

class PT2
{
private:
	float a, b, c;
public:
	void nhap();
	void xuat();
	void giai();

	PT2();
	PT2(float x, float y, float z);
};
void PT2::giai()
{
	if (a == 0)
		cout << "\nKHONG PHAI PHUONG TRINH BAC 2";
	else
	{
		float denta = b * b - 4 * a * c;
		if (denta == 0)
			cout << "\nPtr co nghiem kep: " << -b / (2 * a);
		else if (denta > 0)
			cout << "\nPtr co 2 nghiem: " << (-b + sqrt(denta)) / (2 * a) << " va " << (-b - sqrt(denta)) / (2 * a);
		else
			cout << "\nPhuong trinh vo nghiem.";
	}
}
PT2::PT2(float x, float y, float z)
{
	a = x;
	b = y; 
	c = z;
}
PT2::PT2()
{
	a = b = c = 0;
}
void PT2::xuat()
{
	cout << "Ptr: " << a << "*x^2 " << "+" << b << "*x " << "+" << c << endl;
}
void PT2::nhap()
{
	cout << "\nNhap he so a, b, c: ";
	cin >> a >> b >> c;
}
int main()
{
	PT2 A(2,3, -5);
//	A.nhap();
	A.xuat();
	A.giai();
	return 0;
}