#include <iostream>
using namespace std;

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
};
typedef struct SinhVien SINHVIEN;

struct Node
{
	SINHVIEN data;
	Node* pNext;
};
typedef struct Node NODE;

struct List
{
	NODE* pHead = NULL;
	NODE* pTeil = NULL;
};
typedef struct List LIST;

void Init(LIST& l);
NODE* GetNode();
void AddHead(LIST& l, NODE* p);
void AddTeil(LIST& l, NODE* p);
void Input(LIST& l);
void Output(LIST l);


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
NODE* GetNode()  //GetNode (PHANSO x) tương tự như code đầu sau đó viết thêm hàm nhập PHANSO
{
	NODE* p = new NODE[1];
	if (p == NULL)
	{
		cout << "\nKHONG DU BO NHO !!\n";
		return NULL;
	}
	cout << "\n=======Nhap thong tin SV " << "=======\n";

	cin.ignore();
	cout << "Moi ban nhap ten: ";
	cin.getline(p->data.name, sizeof(p->data.name));

	cout << "Moi ban nhap ngay thang nam sinh: ";
	cin >> p->data.NgaySinh.d >> p->data.NgaySinh.m >> p->data.NgaySinh.y;

	cin.ignore();
	cout << "Moi ban nhap MSSV: ";
	cin.getline(p->data.MSSV, sizeof(p->data.MSSV));

	cout << "Moi ban nhap diem tb: ";
	cin >> p->data.dtb;

	p->pNext = NULL;
	return p;
}
void AddHead(LIST& l, NODE* p)
{
	if (l.pHead == NULL)
		l.pHead = l.pTeil = p;
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void AddTeil(LIST& l, NODE* p)
{
	if (l.pHead == NULL)
		l.pHead = l.pTeil = p;
	else
	{
		l.pTeil->pNext = p;
		l.pTeil = p;
	}
}
void Input(LIST& l)
{
	int n;
	cout << "Nhap so luong Node: ";
	cin >> n;
	Init(l);
	for (int i = 1; i <= n; i++)
	{
		NODE* p = GetNode();
		AddHead(l, p);
	}
}
void Output(LIST l)
{
	int i = 1;
	NODE* p = l.pHead;
	while (p != NULL)
	{
		cout << "\n=======Thong tin SV " << i << "=======\n";
		cout << "\nHo va ten: " << p->data.name;
		cout << "\nMSSV: " << p->data.MSSV;
		cout << "\nSinh ngay: " << p->data.NgaySinh.d << "/" << p->data.NgaySinh.m << "/" << p->data.NgaySinh.y;
		cout << "\nDiem trung binh: " << p->data.dtb;
		i++;

		p = p->pNext;
	}
}