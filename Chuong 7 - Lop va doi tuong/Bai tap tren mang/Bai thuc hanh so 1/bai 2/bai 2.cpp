#include <iostream>
using namespace std;

class HCN
{
private:
	float d;
	float r;
public:
	void nhap();
	void ve();
	float dienTich();
	float chuVi();
};
float HCN::chuVi()
{
	return (d + r) * 2;
}
float HCN::dienTich()
{
	return d * r;
}
void HCN::ve()
{
	cout << "\n ======== VE ========\n";
	for (int i = 1; i <= d; i++)
		cout << "*";
	cout << endl;
	for (int i = 1; i <= r - 2; i++)
	{
		cout << "*";
		for (int j = 2; j <= d - 1; j++)
			cout << " ";
		cout << "*" << endl;
	}
	for (int i = 1; i <= d; i++)
		cout << "*";
	cout << endl;
}
void HCN::nhap()
{
	cout << "\nChieu dai: ";
	cin >> d;
	cout << "\nChieu rong: ";
	cin >> r;
}
int main()
{
	HCN x;
	x.nhap();
	x.ve();
	cout << x.dienTich() << endl;
	cout << x.chuVi();
	return 0;
}