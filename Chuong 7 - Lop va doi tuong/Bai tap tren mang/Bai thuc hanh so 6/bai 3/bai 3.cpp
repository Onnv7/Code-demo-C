#include <iostream>
using namespace std;

class PT2
{
private:
	float a, b, c;
public:
	PT2();
	PT2(int x, int y, int z);

	PT2 operator+(const PT2& x);
	PT2 operator-(const PT2& x);
	friend ostream& operator<<(ostream& os, PT2& x);
	PT2 operator-();
};
PT2 PT2::operator-(const PT2& x)
{
	PT2 kq;
	kq.a = this->a - x.a;
	kq.b = this->b - x.b;
	kq.c = this->c - x.c;
	return kq;
}
PT2 PT2::operator+(const PT2& x)
{
	PT2 kq;
	kq.a = this->a + x.a;
	kq.b = this->b + x.b;
	kq.c = this->c + x.c;
	return kq;
}
PT2::PT2()
{
	a = b = c = 0;
}
PT2 PT2::operator-()
{
	PT2 x;
	x.a = -a;
	x.b = -b;
	x.c = -c;
	return x;
}
ostream& operator<<(ostream& os, PT2& x)
{
	os << x.a << "*(x^2) " << " + " << x.b << "*(x^1)" << " + " << x.c;
	return os;
}
PT2::PT2(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}
int main()
{
	PT2 x(1, 2, 3), y(1, 2, 3);
	x = -x;
	y = -y;
	cout << x << endl;
	cout << y << endl;
	PT2 tong = x + y;
	PT2 hieu = x - y;
	cout << tong << endl;
	cout << hieu << endl;
	return 0;
}