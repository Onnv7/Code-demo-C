#include <iostream>
using namespace std;
class DATE
{
private:
	int d;
	int m;
	int y;
public:
	void nhap();
	void xuat();
};
class NHANSU
{
private:
	char Manhansu[11];
	char Hoten[51];
	DATE NS;
public:
	void nhap();
	void xuat();
};

void DATE::nhap()
{
	cout << "\nNhap ngay thang nam: ";
	cin >> d >> m >> y;
}
void DATE::xuat()
{
	cout << "\nNgay thang nam: " << d << " " << m << " " << y;
}
void NHANSU::nhap()
{
	cout << "\nNhap ma NS: ";
	cin.getline(Manhansu, sizeof(Manhansu));

	cout << "\nNhap ho ten: ";
	cin.getline(Hoten, sizeof(Hoten));

	NS.nhap();
	cin.ignore();
}
void NHANSU::xuat()
{
	cout << "\n================ XUAT ================\n";
	cout << "\nMa nhan su: " << Manhansu;
	cout << "\nHo ten: " << Hoten;
	NS.xuat();
	cout << endl;
}
int main()
{
	cout << "NHAP";
	NHANSU x;
	x.nhap();
	x.xuat();
	return 0;
}