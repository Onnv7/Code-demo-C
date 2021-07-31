#include <iostream>
using namespace std;

class KHOA
{
	char MaKhoa[10];
	char TenKhoa[50];
	char TruongKhoa[50];
	friend class TRUONGDH;
};
class BAN
{
	char MaBan[10];
	char TenBan[50];
	char NgayThanhLap[20];
	friend class TRUONGDH;
};
class TRUONG
{
private:
	char MaTruong[20];
	char TenTruong[50];
	char DiaChi[50];
public:
	void nhap();
	void xuat();
};
void TRUONG::xuat()
{
	cout << "Ma truong: " << MaTruong << endl;

	cout << "Ten truong: " << MaTruong << endl;

	cout << "Dia chi: " << DiaChi << endl;
}
void TRUONG::nhap()
{
	cout << "Nhap ma truong: ";
	cin.getline(MaTruong, sizeof(MaTruong));

	cout << "Nhap ten truong: ";
	cin.getline(MaTruong, sizeof(MaTruong));

	cout << "Nhap dia chi: ";
	cin.getline(DiaChi, sizeof(DiaChi));
}
class TRUONGDH : public TRUONG
{
private:
	KHOA* x;
	int n;
	BAN* y;
	int m;
public:
	void nhap();
	void xuat();
};
void TRUONGDH::xuat()
{
	TRUONG::xuat();

	for (int i = 0; i < n; i++)
	{
		cout << "            XUAT KHOA " << i + 1 << "            " << endl;

		cout << "Ma khoa: " << (x + i)->MaKhoa << endl;

		cout << "Ten khoa: " << (x + i)->TenKhoa << endl;

		cout << "Truong khoa: " << (x + i)->TruongKhoa << endl;
	}

	for (int i = 0; i < m; i++)
	{
		cout << "            XUAT BAN " << i + 1 << "            " << endl;
		cout << "Ma ban: " << (y + i)->MaBan << endl;

		cout << "Ten ban: " << (y + i)->TenBan << endl;

		cout << "Ngay thanh lap ban: " << (y + i)->NgayThanhLap << endl;
	}
}
void TRUONGDH::nhap()
{
	TRUONG::nhap();

	cout << "Nhap so KHOA: ";
	cin >> n; cin.ignore();
	x = new KHOA[n];
	for (int i = 0; i < n; i++)
	{
		cout << "            NHAP KHOA " << i + 1 << "            " << endl;

		cout << "Nhap ma khoa: ";
		cin.getline((x + i)->MaKhoa, sizeof((x + i)->MaKhoa));

		cout << "Nhap ten khoa: ";
		cin.getline((x + i)->TenKhoa, sizeof((x + i)->TenKhoa));

		cout << "Nhap truong khoa: ";
		cin.getline((x + i)->TruongKhoa, sizeof((x + i)->TruongKhoa));
	}
	
	cout << "Nhap so BAN: ";
	cin >> m; cin.ignore();
	y = new BAN[m];
	for (int i = 0; i < m; i++)
	{
		cout << "            NHAP BAN " << i + 1 << "            " << endl;
		cout << "Nhap ma ban: ";
		cin.getline((y + i)->MaBan, sizeof((y + i)->MaBan));

		cout << "Nhap ten ban: ";
		cin.getline((y + i)->TenBan, sizeof((y + i)->TenBan));

		cout << "Nhap ngay thanh lap ban: ";
		cin.getline((y + i)->NgayThanhLap, sizeof((y + i)->NgayThanhLap));
	}
}
int main()
{
	TRUONGDH x;
	x.nhap();
	x.xuat();
	return 0;
}