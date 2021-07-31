#include <iostream>
#include <iomanip>
using namespace std;

class HANGHOA
{
private:
	char MH[11];
	int donGia;
	int Sl;
public:
	void nhap();
	void xuat();
};
int main()
{
	HANGHOA* A;
	int n;
	cout << "\nNhap so luong don hang: ";
	cin >> n;
	A = new HANGHOA[n];
	for (int i = 0; i < n; i++)
		(A+i)->nhap();
	for (int i = 0; i < n; i++)
		A[i].xuat();
	delete[] A;
	return 0;
}
void HANGHOA::xuat()
{
	cout << MH << setw(10) << donGia << setw(10) << Sl << endl;
}
void HANGHOA::nhap()
{
	cout << "\n=========== NHAP ===========\n";
	cin.ignore();
	cout << "\nNhap ma hang: ";
	cin.getline(MH, sizeof(MH));

	cout << "\nNhap don gia: ";
	cin >> donGia;

	cout << "\nNhap so luong: ";
	cin >> Sl;
}
