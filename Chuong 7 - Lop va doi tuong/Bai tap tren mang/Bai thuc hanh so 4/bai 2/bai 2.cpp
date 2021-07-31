#include <iostream>
using namespace std;

class NSX
{
private:
	char Mansx[10];
	char Tennsx[50];
	char DCNSX[50];
	friend class HANG;
};
class HANG
{
private:
	char Mahang[10];
	char Tenhang[50];
	float Dongia;
	float TrongLuong;
	NSX x;
public:
	void nhap();
	void xuat();
};
void HANG::xuat()
{
	cout << "\n====================== XUAT ======================\n";
	cout << "\nMa hang: " << Mahang;
	cout << "\nTen hang: " << Tenhang;
	cout << "\nDon gia: " << Dongia;
	cout << "\nTrong luong: " << TrongLuong;
	cout << "\nMa nsx: " << x.Mansx;
	cout << "\nTen nsx: " << x.Tennsx;
	cout << "\nDia chi nsx: " << x.DCNSX;
}
void HANG::nhap()
{
	cout << "\nNhap ma hang: "; cin.getline(Mahang, sizeof(Mahang));
	cout << "\nNhap ten hang: "; cin.getline(Tenhang, sizeof(Tenhang));
	cout << "\nNhap don gia: "; cin >> Dongia;
	cout << "\nNhap trong luong: "; cin >> TrongLuong; cin.ignore();
	cout << "\nNhap ma nsx: "; cin.getline(x.Mansx, sizeof(x.Mansx));
	cout << "\nNhap ten nsx: "; cin.getline(x.Tennsx, sizeof(x.Tennsx));
	cout << "\nNhap dia chi nsx: "; cin.getline(x.DCNSX, sizeof(x.DCNSX));
}
int main()
{
	HANG x;
	x.nhap();
	x.xuat();
	return 0;
}