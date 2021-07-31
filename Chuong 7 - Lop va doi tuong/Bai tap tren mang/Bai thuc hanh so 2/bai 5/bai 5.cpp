#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class OTO
{
private:
	char MA[11];
	float gia;
	float sonamsd;
	float tilekhauhao;
public:
	void nhap();
	void xuat();
};
void OTO::xuat()
{
	float giatrihientai = gia;
	for(int i=1; i<sonamsd; i++)
		giatrihientai = gia - gia * tilekhauhao;
	cout << MA << setw(10) << gia << setw(10) << sonamsd << setw(10) << tilekhauhao << setw(10) << giatrihientai << endl;
}
void OTO::nhap()
{
	cin.ignore();
	cout << "\n========== NHAP ==========\n";
	cout << "\nNhap ma oto: ";
	cin.getline(MA, sizeof(MA));

	cout << "\nNhap gia: ";
	cin >> gia;

	cout << "\nNhap so nam sd: ";
	cin >> sonamsd;

	cout << "\nNhap ti le khau hao: ";
	cin >> tilekhauhao;
}

int main()
{
	int n;
	cout << "\nNhap so oto: ";
	cin >> n;
	OTO* a;
	a = new OTO[n];
	for (int i = 0; i < n; i++)
		(a + i)->nhap();
	for (int i = 0; i < n; i++)
		(a + i)->xuat();
	delete[] a;
	return 0;
}