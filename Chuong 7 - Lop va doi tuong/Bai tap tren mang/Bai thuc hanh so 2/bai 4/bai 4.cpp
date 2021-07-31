#include <iostream>
#include <iomanip>
using namespace std;

class DN
{
private:
	char tenDN[51];
	char diachi[100];
	int soNV;
	int doanhThu;
public:
	void nhap();
	void xuat();
};
void DN::xuat()
{
	cout << tenDN << setw(10) << diachi << setw(10) << soNV << setw(10) << doanhThu << endl;
}
void DN::nhap()
{
	cin.ignore();
	cout << "\n======== NHAP ========\n";
	cout << "\nNhap ten: ";
	cin.getline(tenDN, sizeof(tenDN));

	cout << "\nNhap dia chi: ";
	cin.getline(diachi, sizeof(diachi));

	cout << "\nNhap so nv: ";
	cin >> soNV;

	cout << "\nNhap doanh thu: ";
	cin >> doanhThu;
}
int main()
{
	int n;
	cout << "\Nhap so luong DN: ";
	cin >> n;
	DN* a;
	a = new DN[n];
	for (int i = 0; i < n; i++)
		(a + i)->nhap();
	for (int i = 0; i < n; i++)
		(a + i)->xuat();
	return 0;
}