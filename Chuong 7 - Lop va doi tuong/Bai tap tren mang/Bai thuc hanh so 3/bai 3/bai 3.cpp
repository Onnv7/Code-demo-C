#include <iostream>
using namespace std;

class HANG
{
private:
	char Mahang[10];
	char Tenhang[50];
	float Dongia;
public:
	void nhap();
	void xuat();
};
class PHIEU
{
private:
	char Maphieu[10];
	HANG* x;
	int n;
public:
	void nhap();
	void xuat();
};
void PHIEU::xuat()
{
	cout << "\nMa phieu: " << Maphieu << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "\n\tThong tin mat hang thu " << i + 1 << endl;
		(x + i)->xuat();
	}
	delete[] x;
}
void PHIEU::nhap()
{
	cout << "\nNhap ma phieu: ";
	cin.getline(Maphieu, sizeof(Maphieu));

	cout << "\nNhap so luong mat hang: ";
	cin >> n;

	x = new HANG[n];
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin mat hang thu " << i + 1 << endl;
		(x + i)->nhap();
	}
}
void HANG::xuat()
{
	cout << "\nMa hang: " << Mahang << endl;

	cout << "\nTen hang: " << Tenhang << endl;

	cout << "\nDon gia: " << Dongia << endl;

}
void HANG::nhap()
{
	cout << "\nNhap ma hang: ";
	cin.getline(Mahang, sizeof(Mahang));

	cout << "\nNhap ten hang: ";
	cin.getline(Tenhang, sizeof(Tenhang));

	cout << "\nNhap don gia: ";
	cin >> Dongia;
	cin.ignore();
}
int main()
{
	PHIEU n;
	n.nhap();
	n.xuat();
	return 0;
}