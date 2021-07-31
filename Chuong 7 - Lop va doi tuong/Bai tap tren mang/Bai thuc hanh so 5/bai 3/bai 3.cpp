#include <iostream>
using namespace std;

class VEHICLE
{
protected:
	char NhanHieu[50];
	int Namsx;
	char Hang[30];
public:
	void nhap();
	void xuat();
};
class MOTO :public VEHICLE
{
private:
	int phankhoi;
public:
	void nhap();
	void xuat();
};
class OTO:public VEHICLE
{
private:
	int sochongoi;
	int dungtich;
public:
	void nhap();
	void xuat();
};
void MOTO::xuat()
{
	VEHICLE::xuat();
	cout << "\nNhap phan khoi: " << phankhoi << endl;
}
void MOTO::nhap()
{
	VEHICLE::nhap();
	cout << "\nNhap phan khoi: "; cin >> phankhoi; cin.ignore();
}
void OTO::xuat()
{
	VEHICLE::xuat();
	cout << "\nSo cho ngoi: " << sochongoi << endl;
	cout << "\nDung tich: " << dungtich << endl;
}
void OTO::nhap()
{
	VEHICLE::nhap();
	cout << "\nNhap so cho ngoi: "; cin >> sochongoi; cin.ignore();
	cout << "\nNhap dung tich: "; cin >> dungtich; cin.ignore();
}
void VEHICLE::xuat()
{
	cout << "\nNhan hieu: " << NhanHieu << endl;
	cout << "\nNam sx: " << Namsx << endl;
	cout << "\nHang: " << Hang << endl;
}
void VEHICLE::nhap()
{
	cout << "\nNhap nhan hieu: "; cin.getline(NhanHieu, sizeof(NhanHieu));
	cout << "\nNhap nam sx: "; cin >> Namsx; cin.ignore();
	cout << "\nNhap hang: "; cin.getline(Hang, sizeof(Hang));
}
int main()
{
	MOTO a;
	a.nhap(); // can phan bien 2 ham nhap, nhap() cua VEHICLE va nhap cua MOTO/OTO. tuong tu doi voi xuat()
	a.xuat();
	OTO b;
	b.nhap();
	b.xuat();
	return 0;
}