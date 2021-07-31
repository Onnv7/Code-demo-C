#include <iostream>
using namespace std;
class SINHVIEN
{
private:
	char MSSV[11];
	char HoTen[31];
	int tuoi;
	float diem;
public:
	void nhap();
	void xuat();
};
int main()
{
	SINHVIEN a, b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	return 0;
}

void SINHVIEN::nhap()
{
	cout << "\n========= NHAP THONG TIN =========\n";
	cout << "\nNhap MSSV: ";
	cin.getline(MSSV, sizeof(MSSV));

	cout << "\nNhap Ho va ten: ";
	cin.getline(HoTen, sizeof(HoTen));

	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	cin.ignore();

	cout << "\nNhap diem: ";
	cin >> diem;
	cin.ignore();
}
void SINHVIEN::xuat()
{
	cout << "\n========= XUAT THONG TIN =========";
	cout << "\nMSSV: " << MSSV;
	cout << "\nHo va ten: " << HoTen;
	cout << "\nTuoi: " << tuoi;
	cout << "\nDiem: " << diem;
}
