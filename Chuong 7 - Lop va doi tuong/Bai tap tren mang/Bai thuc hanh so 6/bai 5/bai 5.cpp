#include <iostream>
using namespace std;

class MANG
{
private:
	int n;
	float* a;
public:
	friend ostream& operator<<(ostream& os, MANG& x);
	friend istream& operator>>(istream& is, MANG& x);

	MANG operator--();
	MANG operator++();
};
MANG MANG::operator++()
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (a[i] > a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	return *this;
}
MANG MANG::operator--()
{
	for(int i=0; i<(n-1); i++)
		for(int j=i+1; j<n; j++)
			if (a[i] < a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	return *this;
}
ostream& operator<<(ostream& os, MANG& x)
{
	for (int i = 0; i < x.n; i++)
		cout << x.a[i] << " ";
	return os;
}
istream& operator>>(istream& is, MANG& x)
{
	cout << "n = ";
	is >> x.n;
	x.a = new float[x.n];
	for (int i = 0; i < x.n; i++)
	{
		cout << "A[" << i << "] = ";
		is >> x.a[i];
	}
	return is;
}

int main()
{
	MANG a;
	cout << "============== NHAP A ==============\n";
	cin >> a;
	cout << a << endl;
	MANG b = ++a;
	cout << b << endl;
	MANG c = --a;
	cout << c << endl;
	return 0;
}