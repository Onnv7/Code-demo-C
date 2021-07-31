#include <iostream>
using namespace std;

int sosv = 0;
struct Time
{
	int d;
	int m;
	int y;
};
typedef struct Time TIME;
struct SinhVien
{
	char name[31];
	char MSSV[10];
	Time NgaySinh;
	float dtb;
	SinhVien* pNext;
};
typedef struct SinhVien SINHVIEN;

struct List
{
	SINHVIEN* pHead;
	SINHVIEN* pTeil;
};
typedef struct List LIST;

void Init(LIST& l);
SINHVIEN* GetInfor();
void Them_tai_n(int n, LIST& l, SINHVIEN* p);
void Input(LIST& l);
void Output(LIST l);
void AddHead(LIST& l, SINHVIEN* p); 
void AddTeil(LIST& l, SINHVIEN* p);



int main()
{
	LIST l;
	Input(l);
	Output(l);
	return 0;
}
void Init(LIST& l)
{
	l.pHead = l.pTeil = NULL;
	
}
SINHVIEN* GetInfor()
{
	SINHVIEN* p = new SINHVIEN[1];
	if (p == NULL)
	{
		cout << "\nKHONG DU BO NHO !!\n";
		return NULL;
	}
	cout << "\n=======Nhap thong tin SV " << "=======\n";

	cin.ignore();
	cout << "Moi ban nhap ten: ";
	cin.getline(p->name, sizeof(p->name));

	cout << "Moi ban nhap ngay thang nam sinh: ";
	cin >> p->NgaySinh.d >> p->NgaySinh.m >> p->NgaySinh.y;

	cin.ignore();
	cout << "Moi ban nhap MSSV: ";
	cin.getline(p->MSSV, sizeof(p->MSSV));

	cout << "Moi ban nhap diem tb: ";
	cin >> p->dtb;

	p->pNext = NULL;
	return p;
}
void AddHead(LIST& l, SINHVIEN* p)
{
	if (l.pHead == NULL)
		l.pHead = l.pTeil = p;
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void AddTeil(LIST& l, SINHVIEN* p)
{
	if (l.pHead == NULL)
		l.pHead = l.pTeil = p;
	else
	{
		l.pTeil->pNext = p;
		l.pTeil = p;
	}
}
void Them_tai_n(int n, LIST &l, SINHVIEN* p)
{
	if (sosv == 0)
		l.pHead = l.pTeil = p;
	else if (sosv == 1 || n == 1)
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
	else 
	{
		SINHVIEN* truoc, * sau;
		truoc = l.pHead;
		sau = truoc->pNext;
		for (int i = 1; i < n - 1; i++)
			truoc = truoc->pNext;  //n-1
		sau = truoc->pNext;			// n
		truoc->pNext = p;
		p->pNext = sau;
	}
	sosv++;
}
void Input(LIST& l)
{
	int n;
	cout << "\nNhap so luong SV: ";
	cin >> n;
	Init(l);
	for (int i = 1; i <= n; i++)
	{
		SINHVIEN* p = new SINHVIEN[1];
		p = GetInfor();
		AddTeil(l, p);
	//	AddHead(l, p);
	//	Them_tai_n(1, l, p);
	}
}
void Output(LIST l)
{
	int i = 1;
	SINHVIEN* p = l.pHead;
	while(p != NULL)
	{
		cout << "\n=======Thong tin SV " << i << "=======\n";
		cout << "\nHo va ten: " << p->name;
		cout << "\nMSSV: " << p->MSSV;
		cout << "\nSinh ngay: " << p->NgaySinh.d << "/" << p->NgaySinh.m << "/" << p->NgaySinh.y;
		cout << "\nDiem trung binh: " << p->dtb;
		i++;
		
		p = p->pNext;
	}
	if (p == NULL)
		cout << "Nullllll";
}