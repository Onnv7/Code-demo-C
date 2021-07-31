#include <iostream>
using namespace std;

class PHANSO
{
private:
	int tu;
	int mau;
public:
	PHANSO operator+(const PHANSO& x);
	PHANSO operator-(const PHANSO& x);
	PHANSO operator*(const PHANSO& x);
	PHANSO operator/(const PHANSO& x);

	operator float();

	friend istream& operator>>(istream& is, PHANSO& x);
	friend ostream& operator<<(ostream& os, PHANSO& x);
};
PHANSO::operator float()
{
	return (float)tu / mau;
}
PHANSO PHANSO::operator/(const PHANSO& x)
{
	PHANSO kq;
	kq.tu = this->tu * x.mau;
	kq.mau = this->mau * x.tu;
	return kq;
}
PHANSO PHANSO::operator*(const PHANSO& x)
{
	PHANSO kq;
	kq.tu = this->tu * x.tu;
	kq.mau = this->mau * x.mau;
	return kq;
}
PHANSO PHANSO::operator-(const PHANSO& x)
{
	PHANSO kq;
	kq.tu = this->tu * x.mau - this->mau * x.tu;
	kq.mau = this->mau * x.mau;
	return kq;
}
PHANSO PHANSO::operator+(const PHANSO& x)
{
	PHANSO kq;
	kq.tu = this->tu * x.mau + this->mau * x.tu;
	kq.mau = this->mau * x.mau;
	return kq;
}
ostream& operator<<(ostream& os, PHANSO& x)
{
	os << x.tu << "/" << x.mau;
	return os;
}
istream& operator>>(istream& is, PHANSO& x)
{
	is >> x.tu >> x.mau;
	return is;
}
int main()
{
	PHANSO a, b, c;
	cin >> a >> b;
	PHANSO tong = a + b;
	cout << "a + b = " << tong << " = " << tong.operator float() << endl;
	PHANSO hieu = a - b;
	cout << "a - b = " << hieu << " = " << hieu.operator float() << endl;
	return 0;
}