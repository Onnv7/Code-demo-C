#include <iostream>
using namespace std;

class PERSON
{
protected:
	char Hoten[50];
	char Ngaysinh[13];
	char Quequan[50];
};
class KYSU : public PERSON
{
private:
	char Nganh[50];
	int NamTN;
public:
	void nhap();
	void xuat();
	friend void TNGanNhat(KYSU* a, int k);
};
void TNGanNhat(KYSU* a, int k)
{
	int max = (a + 0)->NamTN;
	for (int i = 1; i < k; i++)
		if ((a + i)->NamTN > max)
			max = (a + i)->NamTN;
	for(int i=0; i<k; i++)
		if ((a + i)->NamTN == max)
		{
			cout << "\n============== XUAT ==============\n";
			(a + i)->xuat();
		}
}
void KYSU::xuat()
{
	cout << "\nHo ten: " << Hoten << endl;
	cout << "\nNgay sinh: " << Ngaysinh << endl;
	cout << "\nQue quan: " << Quequan << endl;
	cout << "\nNganh: " << Nganh << endl;
	cout << "\nNam tn: " << NamTN << endl;
}
void KYSU::nhap()
{
	cout << "\nNhap ho ten: "; cin.getline(Hoten, sizeof(Hoten));
	cout << "\nNhap ngay sinh: "; cin.getline(Ngaysinh, sizeof(Ngaysinh));
	cout << "\nNhap que quan: "; cin.getline(Quequan, sizeof(Quequan));
	cout << "\nNhap nganh: "; cin.getline(Nganh, sizeof(Nganh));
	cout << "\nNhap nam tn: "; cin >> NamTN; cin.ignore();
}
int main()
{
	int n;
	cout << "\nNhap so luong ky su: "; cin >> n;
	cin.ignore();
	KYSU* x;
	x = new KYSU[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\n============= NHAP THONG TIN KY SU THU " << i + 1 << " =============\n";
		(x + i)->nhap();
	}
	TNGanNhat(x, n);
	return 0;
}