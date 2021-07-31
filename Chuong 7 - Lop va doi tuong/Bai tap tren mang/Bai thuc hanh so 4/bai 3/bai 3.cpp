#include <iostream>
using namespace std;
class HANG;
class DATE
{
	int d;
	int m;
	int y;
	friend void xuat2017(HANG* x, int n);
	friend class HANG;
};
class HANG
{
private:
	char Mahang[10];
	char Tenhang[50];
	DATE Ngaysx;
public:
	void nhap();
	void xuat();
	friend void xuat2017(HANG* x, int n);
};


void xuat2017(HANG * x, int n)
{
	for (int i = 0; i < n; i++)
		if ((x + i)->Ngaysx.y == 2017)
		{
			cout << "\n";
			(x + i)->xuat();
		}
}
void HANG::xuat()
{
	cout << "\nMa hang: " << Mahang;
	cout << "\nTen hang: " << Tenhang;
	cout << "\nNgay sx: " << Ngaysx.d << "/" << Ngaysx.m << "/" << Ngaysx.y << endl;
}
void HANG::nhap()
{
	cout << "\nNhap ma hang: "; cin.getline(Mahang, sizeof(Mahang));
	cout << "\nNhap ten hang: "; cin.getline(Tenhang, sizeof(Tenhang));
	cout << "\nNhap ngay thang nam sx: "; cin >> Ngaysx.d >> Ngaysx.m >> Ngaysx.y; cin.ignore();
}
int main()
{
	HANG* x;
	int n;
	cout << "Nhap so luong: "; cin >> n;
	cin.ignore();
	x = new HANG[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\n=============== NHAP THU " << i + 1 << " ===============\n";
		(x + i)->nhap();
	}
	xuat2017(x, n);
	return 0;
}