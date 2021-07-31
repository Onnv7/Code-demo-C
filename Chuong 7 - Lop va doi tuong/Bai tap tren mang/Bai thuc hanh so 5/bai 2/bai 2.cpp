#include <iostream>
using namespace std;

class PRINTER
{
protected:
	float TrongLuong;
	char Hangsx[50];
	int Namsx;
	int Tocdo;
};
class DOTPRINTER:public PRINTER
{
private:
	int matdokim;
public:
	void nhap();
	void xuat();
};
class LASERPRINTER:public PRINTER
{
private:
	int dophangiai;
public:
	void nhap();
	void xuat();
};
void LASERPRINTER::xuat()
{
	cout << "\nTrong luong: " << TrongLuong << endl;
	cout << "\nHang sx: " << Hangsx << endl;
	cout << "\nNam sx: " << Namsx << endl;
	cout << "\nToc do: " << Tocdo << endl;
	cout << "\nDo phan giai: " << dophangiai << endl;
}
void LASERPRINTER::nhap()
{
	cout << "\nNhap trong luong: "; cin >> TrongLuong; cin.ignore();
	cout << "\nNhap hang sx: "; cin.getline(Hangsx, sizeof(Hangsx));
	cout << "\nNhap nam sx: "; cin >> Namsx; cin.ignore();
	cout << "\nNhap toc do: "; cin >> Tocdo; cin.ignore();
	cout << "\nNhap do phan giai: "; cin >> dophangiai; cin.ignore();
}
void DOTPRINTER::nhap()
{
	cout << "\nNhap trong luong: "; cin >> TrongLuong; cin.ignore();
	cout << "\nNhap hang sx: "; cin.getline(Hangsx, sizeof(Hangsx));
	cout << "\nNhap nam sx: "; cin >> Namsx; cin.ignore();
	cout << "\nNhap toc do: "; cin >> Tocdo; cin.ignore();
	cout << "\nNhap mat do kim: "; cin >> matdokim; cin.ignore();
}void DOTPRINTER::xuat()
{
	cout << "\nTrong luong: " << TrongLuong << endl;
	cout << "\nHang sx: " << Hangsx << endl;
	cout << "\nNam sx: " << Namsx << endl;
	cout << "\nToc do: " << Tocdo << endl;
	cout << "\nMat do kim: " << matdokim << endl;
}
int main()
{
	DOTPRINTER a;
	a.nhap();
	a.xuat();
	LASERPRINTER b;
	b.nhap();
	b.xuat();
	return 0;
}