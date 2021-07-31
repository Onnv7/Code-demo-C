#include <iostream>
using namespace std;

class SOPHUC
{
private:
	int thuc;
	int ao;
public:
	SOPHUC();
	SOPHUC(int a, int b);

	friend istream& operator>>(istream& is, SOPHUC& x);
	friend ostream& operator<<(ostream& os, SOPHUC& x);

	SOPHUC operator+(const SOPHUC& x);
	SOPHUC operator-(const SOPHUC& x);
};
SOPHUC::SOPHUC(int a, int b)
{
	thuc = a;
	ao = b;
}
SOPHUC::SOPHUC()
{
	ao = 0;
	thuc = 0;
}
SOPHUC SOPHUC::operator-(const SOPHUC& x)
{
	SOPHUC kq;
	kq.ao = this->ao - x.ao;
	kq.thuc = this->thuc - x.thuc;
	return kq;
}
SOPHUC SOPHUC::operator+(const SOPHUC& x)
{
	SOPHUC kq;
	kq.ao = this->ao + x.ao;
	kq.thuc = this->thuc + x.thuc;
	return kq;
}
ostream& operator<<(ostream& os, SOPHUC& x)
{
	os << x.thuc << " + " << x.ao << "i";
	return os;
}
istream& operator>>(istream& is, SOPHUC& x)
{
	is >> x.thuc >> x.ao;
	return is;
}
int main()
{
	SOPHUC sp1, sp2, sp3, sp4;
	cin >> sp1 >> sp2;
	sp3 = sp1 + sp2;
	sp4 = sp1 - sp2;
	cout << sp1 << " " << sp2 << " " << sp3 << " " << sp4;
	return 0;
}