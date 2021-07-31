#include <iostream>
using namespace std;

struct Node
{
	int data;
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
NODE* GetNode(int x);
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
NODE* GetNode(int x)
{
	NODE* p = new NODE[1];
	if (p == NULL)
		return NULL;
	p->data = x;
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
		int x;
		cout << "Moi ban nhap gia tri node: ";
		cin >> x;
		NODE* p = GetNode(x);
		AddHead(l, p);
	}
}
void Output(LIST l)
{
	for (NODE* p = l.pHead; p != NULL; p = p->pNext)
		cout << p->data << " ";
}