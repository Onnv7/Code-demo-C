#include <iostream>
using namespace std;

class DATE
{
private:
	int d, m, y;
public:
	void nhap();
	void xuat();
};
void DATE::xuat()
{
	cout << "Ngay thang nam: " << d << "/" << m << "/" << y << endl;
}
void DATE::nhap()
{
	cout << "Nhap ngay: ";
	cin >> d;
	cout << "Nhap thang: ";
	cin >> m;
	cout << "Nhap nam: ";
	cin >> y;
}
class NSX
{
private:
	char TenNSX[50];
	char DiaChi[50];
public:
	void nhap();
	void xuat();
};
void NSX::xuat()
{
	cout << "Ten nsx: " << TenNSX << endl;

	cout << "Dia chi: " << DiaChi << endl;
}
void NSX::nhap()
{
	cout << "Nhap ten nsx: ";
	cin.getline(TenNSX, sizeof(TenNSX));

	cout << "Nhap dia chi: ";
	cin.getline(DiaChi, sizeof(DiaChi));
}
class HANG
{
private:
	char Tenhang[50];
	NSX x;
	int Dongia;
public:
	void nhap();
	void xuat();
};
void HANG::xuat()
{
	cout << "Ten hang: " << Tenhang << endl;

	x.xuat();

	cout << "Don gia: " <<  Dongia << endl;;
}
void HANG::nhap()
{
	cout << "Nhap ten hang: ";
	cin.getline(Tenhang, sizeof(Tenhang));

	x.nhap();

	cout << "Nhap don gia: ";
	cin >> Dongia;
	cin.ignore();
}
class TIVI : public HANG
{
private:
	int Kichthuoc;
	DATE NgayNhap;
public:
	void nhap();
	void xuat();
};
void TIVI::xuat()
{
	HANG::xuat();
	cout << "Nhap kich thuoc: " << Kichthuoc << endl;

	NgayNhap.xuat();
}
void TIVI::nhap()
{
	HANG::nhap();
	cout << "Nhap kich thuoc: ";
	cin >> Kichthuoc;
	cin.ignore();

	NgayNhap.nhap();
}
int main()
{
	TIVI a;
	a.nhap();
	a.xuat();
	return 0;
}