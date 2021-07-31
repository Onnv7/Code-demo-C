#include <iostream>
using namespace std;

class QUANLY
{
private:
	char Maql[10];
	char Hoten[50];
public:
	void nhap();
	void xuat();
};
class MAY
{
private:
	char Mamay[10];
	char Kieumay[30];
	char Tinhtrang[100];
public:
	void nhap();
	void xuat();
};
class PHONGMAY
{
private:
	char Maphong[10];
	char Tenphong[30];
	float Dientich;
	QUANLY x;
	MAY* y;
	int n;
public:
	void nhap();
	void xuat();
};
void PHONGMAY::xuat()
{
	cout << "\nMa phong: " << Maphong << endl;

	cout << "\nTen phong: " << Tenphong << endl;

	cout << "\nDien tich: " << Dientich << endl;

	x.xuat();

	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin may " << i + 1 << endl;
		(y + i)->xuat();
	}
	delete[] y;
}
void PHONGMAY::nhap()
{
	cout << "\nNhap ma phong: ";
	cin.getline(Maphong, sizeof(Maphong));

	cout << "\nNhap ten phong: ";
	cin.getline(Tenphong, sizeof(Tenphong));

	cout << "\nNhap dien tich: ";
	cin >> Dientich;
	cin.ignore();

	x.nhap();

	cout << "\nNhap so may: ";
	cin >> n;
	y = new MAY[n];
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin may " << i + 1 << endl;
		(y + i)->nhap();
	}
}
void MAY::xuat()
{
	cout << "\nMa may: " << Mamay << endl;

	cout << "\nKieu may: " << Kieumay << endl;

	cout << "\nTinh trang: " << Tinhtrang << endl;
}
void MAY::nhap()
{
	cout << "\nNhap ma may: ";
	cin.getline(Mamay, sizeof(Mamay));

	cout << "\nNhap kieu may: ";
	cin.getline(Kieumay, sizeof(Kieumay));

	cout << "\nNhap tinh trang: ";
	cin.getline(Tinhtrang, sizeof(Tinhtrang));
}
void QUANLY::xuat()
{
	cout << "\nMa quan ly: " << Maql << endl;

	cout << "\nHo ten: " << Hoten << endl;
}
void QUANLY::nhap()
{
	cout << "\nNhap ma quan ly: ";
	cin.getline(Maql, sizeof(Maql));

	cout << "\nNhap ho ten: ";
	cin.getline(Hoten, sizeof(Hoten));
}

int main()
{
	PHONGMAY a;
	a.nhap();
	a.xuat();
	return 0;
}