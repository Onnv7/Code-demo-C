#include <iostream>
#include <iomanip>
using namespace std;

class MATRIX
{
private:
	double** a;
	int m, n;
public:
	friend istream& operator>>(istream& is, MATRIX& x);
	friend ostream& operator<<(ostream& os, MATRIX& x);

	MATRIX operator-();
	MATRIX operator-(const MATRIX& x);
	MATRIX operator+(const MATRIX& x);
};
MATRIX MATRIX::operator-(const MATRIX& x)
{
	MATRIX kq;
	kq.m = m;
	kq.n = n;
	kq.a = new double* [m];
	for (int i = 0; i < m; i++)
		kq.a[i] = new double[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			kq.a[i][j] = this->a[i][j] - a[i][j];
	return kq;
}
MATRIX MATRIX::operator+(const MATRIX& x)
{
	MATRIX kq;
	kq.m = m;
	kq.n = n;
	kq.a = new double* [m];
	for (int i = 0; i < m; i++)
		kq.a[i] = new double[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			kq.a[i][j] = this->a[i][j] + a[i][j];
	return kq;
}
MATRIX MATRIX::operator-()
{
	MATRIX kq;
	kq.m = m;
	kq.n = n;
	kq.a = new double* [m];
	for (int i = 0; i < m; i++)
		kq.a[i] = new double[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			kq.a[i][j] = a[i][j];
	return kq;
}
ostream& operator<<(ostream& os, MATRIX& x)
{
	for (int i = 0; i < x.m; i++)
	{
		for(int j=0; j<x.n; j++)
			os << "a[" << i << "][" << j << "] = " << x.a[i][j] << "     ";
		os << endl;
	}
	return os;
}
istream& operator>>(istream& is, MATRIX& x)
{
	cout << "Nhap so hang: ";
	is >> x.m;
	cout << "Nhap so cot: ";
	is >> x.n;
	x.a = new double* [x.m];
	for (int i = 0; i < x.m; i++)
		x.a[i] = new double[x.n];
	for(int i=0; i<x.m; i++)
		for (int j = 0; j < x.n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			is >> x.a[i][j];
		}
	return is;
}
int main()
{
	MATRIX a, b;
	cout << "============== NHAP MATRIX A ==============\n";
	cin >> a;
	cout << "============== NHAP MATRIX B ==============\n";
	cin >> b;
	a = -a;
	b = -b;
	cout << "============== MATRIX -A ==============\n";
	cout << a;
	cout << "============== MATRIX -B ==============\n";
	cout << b;
	cout << "============== A + B ==============\n";
	MATRIX tong = a + b;
	cout << tong;
	cout << "============== A - B ==============\n";
	MATRIX hieu = a - b;
	cout << hieu;
	return 0;
}