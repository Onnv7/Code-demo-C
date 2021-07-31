#include <iostream>
#include <iomanip>
using namespace std;

class SACH
{
private:
	char Masach[10];
	char Tensach[51];
	char Nxb[31];
	int Sotrang;
	int Giatien;
public: 
	void nhap();
	void xuat();
};
void SACH::xuat()
{
	cout << Masach << setw(10) << Tensach << setw(10) << Nxb << setw(10) << Sotrang << setw(10) << Giatien << endl;
}
void SACH::nhap()
{
	cout << "\n=========== NHAP ===========\n";
	cin.ignore();
	cout << "\nNhap ma sach: ";
	cin.getline(Masach, sizeof(Masach));

	cout << "\nNhap ten sach: ";
	cin.getline(Tensach, sizeof(Tensach));

	cout << "\nNhap nxb: ";
	cin.getline(Nxb, sizeof(Nxb));

	cout << "\nNhap so trang: ";
	cin >> Sotrang;

	cout << "\nNhap gia tien: ";
	cin >> Giatien;
}

int main()
{
	int n;
	cout << "\nNhap so luong sach: ";
	cin >> n;
	SACH* a;
	a = new SACH[n];
	for (int i = 0; i < n; i++)
		(a + i)->nhap();
	for (int i = 0; i < n; i++)
		(a + i)->xuat();
	delete[] a;
	return 0;
}