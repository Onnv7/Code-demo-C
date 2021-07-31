#include <iostream>
using namespace std;

class SINHVIEN
{
private:
	char Masv[10];
	char Hoten[50];
	float DiemToan;
	float DiemLy;
	float DiemHoa;
public:
	void nhap();
	void xuat();
	friend void SapXep(SINHVIEN* x, int n);
};
void SINHVIEN::xuat()
{
	cout << "\nMa sv: " << Masv << endl;

	cout << "\nHo ten: " << Hoten << endl;

	cout << "\nDiem toan: " << DiemToan << endl;

	cout << "\nDiem ly: " << DiemLy << endl;

	cout << "\nDiem hoa: " << DiemHoa << endl;

	cout << "\nTong = " << DiemHoa + DiemLy + DiemToan << endl;
}
void SINHVIEN::nhap()
{
	cout << "\nNhap ma sv: ";
	cin.getline(Masv, sizeof(Masv));
	
	cout << "\nNhap ho ten: ";
	cin.getline(Hoten, sizeof(Hoten));

	cout << "\nNhap diem toan: ";
	cin >> DiemToan;

	cout << "\nNhap diem ly: ";
	cin >> DiemLy;

	cout << "\nNhap diem hoa: ";
	cin >> DiemHoa;
	cin.ignore();
}
int main()
{
	SINHVIEN* x;
	int n;
	cout << "\nNhap so luong sinh vien: ";
	cin >> n;
	cin.ignore();
	x = new SINHVIEN[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin sinh vien thu " << i + 1 << endl;
		(x + i)->nhap();
	}
	SapXep(x, n);
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << endl;
		(x + i)->xuat();
	}
	delete[] x;
	return 0;
}
void SapXep(SINHVIEN* x, int n)
{
	for (int i = 1; i < n; i++)
	{
		SINHVIEN a = *(x + i);
		float tong = (x + i)->DiemHoa + (x + i)->DiemLy + (x + i)->DiemToan;
		int j = i - 1;
		while (tong < (x + j)->DiemHoa + (x + j)->DiemLy + (x + j)->DiemToan && j >= 0)
		{
			*(x + j + 1) = *(x + j);
			j--;
		}
		*(x + j + 1) = a;
	}
}