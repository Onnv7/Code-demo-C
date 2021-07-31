#include <iostream>
using namespace std;

class GIAIPTR2
{
private:
	float a;
	float b;
	float c;
public:
	void nhap();
	void xuat();
	void giai();
};
void GIAIPTR2::giai()
{
	if (a == 0)
		cout << "\nKHONG PHAI PTR BAC 2";
	else
	{
		float denta = b * b - 4 * a * c;
		if (denta == 0)
			cout << "\nPtr co nghiem kep: " << (-b) / (2 * a);
		else if (denta < 0)
			cout << "\nPtr vo nghiem.";
		else
			cout << "\nPtr co 2 nghiem phan biet: " << (-b - denta) / (2 * a) << " va " << (-b + denta) / (2 * a);
	}
}
void GIAIPTR2::xuat()
{
	cout << "\nPtr: " << a << "*x^2 + " << b << "*x " << "+ " << c;
}
void GIAIPTR2::nhap()
{
	cout << "\nNhap cac he so: ";
	cin >> a >> b >> c;
}
int main()
{
	GIAIPTR2 x;
	x.nhap();
	x.xuat();
	x.giai();
	return 0;
}