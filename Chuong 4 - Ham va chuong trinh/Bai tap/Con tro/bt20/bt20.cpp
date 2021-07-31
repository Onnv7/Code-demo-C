#include <iostream>
using namespace std;
void tan_suat(char* s);
void xuat(char c, float f);
int main()
{
	char* s;
	s = new char[100];
	cin.getline(s, 100);
	tan_suat(s);
	system("pause");
	return 0;
}
void tan_suat(char* s)
{
	int len = strlen(s);
	int A[1000] = { 0 };
	for (int i = 0; i < len; i++)
	{
		if (A[int(*(s + i))] == 0 && *(s+i) != ' ')
		{
			int dem = 1;
			for (int j = i + 1; j < len; j++)
				if (*(s + j) == *(s + i))
					dem++;
			xuat(*(s + i), float(dem));
			A[int(*(s + i))] = 1;
		}
	}
}
void xuat(char c, float f)
{
	cout << c << "(" << int(c) << ")" << ": " << f << "\n";
}