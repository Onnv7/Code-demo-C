#include <iostream>
using namespace std;

class SCHOOL
{
	char Name[50];
	char Date[20];
	friend class FACULTY;
};
class FACULTY
{
private:
	char Name[50];
	char Date[20];
	SCHOOL x;
public:
	void nhap();
	void xuat();
};
void FACULTY::xuat()
{
	cout << "Ten truong: " << x.Name << endl;

	cout << "Ngay truong: " << x.Date << endl;

	cout << "Ten fac: " << Name << endl;

	cout << "Ngay fac: " << Date << endl;
}
void FACULTY::nhap()
{
	cout << "Nhap ten truong: ";
	cin.getline(x.Name, sizeof(x.Name));

	cout << "Nhap ngay truong: ";
	cin.getline(x.Date, sizeof(x.Date));

	cout << "Nhap ten fac: ";
	cin.getline(Name, sizeof(Name));

	cout << "Nhap ngay fac: ";
	cin.getline(Date, sizeof(Date));
}
class PERSON
{
private:
	char Name[50];
	char Birth[20];
	char Address[50];
public:
	void nhap();
	void xuat();
	PERSON();
};
void PERSON::xuat()
{
	cout << "Ten Per: " << Name << endl;

	cout << "Birth: " << Birth << endl;

	cout << "Nhap Address: " << Address << endl;
}
void PERSON::nhap()
{
	cout << "Nhap ten Per: ";
	cin.getline(Name, sizeof(Name));

	cout << "Nhap birth: ";
	cin.getline(Birth, sizeof(Birth));

	cout << "Nhap Address: ";
	cin.getline(Address, sizeof(Address));
}
PERSON::PERSON()
{
	Name[0] = '\0';
	Birth[0] = '\0';
	Address[0] = '\0';
}
class STUDENT:public PERSON
{
private:
	FACULTY y;
	char Class[5];
	float score;
public:
	void nhap();
	void xuat();
};
void STUDENT::xuat()
{
	PERSON::xuat();
	cout << "Class: " << Class << endl;

	cout << "Socre: " << score << endl;
}
void STUDENT::nhap()
{
	PERSON::nhap();
	cout << "Nhap class: ";
	cin.getline(Class, sizeof(Class));

	cout << "Nhap socre: ";
	cin >> score;
	cin.ignore();
}
int main()
{
	STUDENT x;
	x.nhap();
	x.xuat();
	return 0;
}