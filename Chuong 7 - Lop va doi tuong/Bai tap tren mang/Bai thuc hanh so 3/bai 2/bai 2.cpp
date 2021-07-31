#include <iostream>
using namespace std;
class NSX
{
private:
	char Masx[10];
	char Tennsx[50];
	char Dcnsx[50];
public:
	void nhap();
	void xuat();
};
class HANG
{
private:
	char Mahang[10];
	char Tenhang[50];
	NSX x;
public:
	void nhap();
	void xuat();
};
void HANG::nhap()
{
	cout << "\nNhap ma hang: ";
	cin.getline(Mahang, sizeof(Mahang));

	cout << "\nNhap ten hang: ";
	cin.getline(Tenhang, sizeof(Tenhang));

	x.nhap();
}
void HANG::xuat()
{
	cout << "\nMa hang: " << Mahang << endl;

	cout << "\nTen hang: " << Tenhang << endl;

	x.xuat();
}
void NSX::nhap()
{
	cout << "\nNhap ma sx: ";
	cin.getline(Masx, sizeof(Masx));

	cout << "\nNhap ten nsx: ";
	cin.getline(Tennsx, sizeof(Tennsx));

	cout << "\nNhap dia chi nsx: ";
	cin.getline(Dcnsx, sizeof(Dcnsx));
}
void NSX::xuat()
{
	cout << "\nMa sx: " << Masx << endl;

	cout << "\nTen nsx: " << Tennsx << endl;

	cout << "\nDia chi nsx: " << Dcnsx << endl;
}
int main()
{
	HANG a;
	a.nhap();
	a.xuat();
	return 0;
}