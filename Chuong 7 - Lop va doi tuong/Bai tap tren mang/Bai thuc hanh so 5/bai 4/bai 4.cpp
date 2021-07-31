#include <iostream>
#include <string.h>
using namespace std;

class ELECTRONIC
{
protected:
	float congsuat;
	float dienap;
public:
	ELECTRONIC(float a, float b);
};
class MAYGIAT :public ELECTRONIC
{
private:
	float dungtichKg;
	char loai[30];
public:
	MAYGIAT(float a, float b, float c, char *d);
	void xuat();
};
class TULANH :public ELECTRONIC
{
private:
	float dungtichL;
	int songan;
public:
	TULANH(float a, float b, float c, int d);
	void xuat();
};
void TULANH::xuat()
{
	cout << "\nCong suat: " << congsuat << endl;
	cout << "\nDien ap: " << dienap << endl;
	cout << "\nDung tich: " << dungtichL << endl;
	cout << "\nSo ngan: " << songan << endl;
}
TULANH::TULANH(float a, float b, float c, int d) :ELECTRONIC(a, b)
{
	dungtichL = c;
	songan = d;
}
void MAYGIAT::xuat()
{
	cout << "\nCong suat: " << congsuat << endl;
	cout << "\nDien ap: " << dienap << endl;
	cout << "\nDung tich: " << dungtichKg << endl;
	cout << "\nLoai: " << loai << endl;
}
MAYGIAT::MAYGIAT(float a, float b, float c, char *d) :ELECTRONIC(a, b)
{
	dungtichKg = c;
	strcpy_s(loai, d);
}
ELECTRONIC::ELECTRONIC(float x, float y)
{
	congsuat = x;
	dienap = y;
}
 int main()
{
	 char d[30];
	 cin.getline(d, sizeof(d));
	 MAYGIAT a(1, 1, 1, d); // bien hang "..." khong the coppy
	 a.xuat();
	 TULANH b(2, 2, 2, 2);
	 b.xuat();
	return 0;
}