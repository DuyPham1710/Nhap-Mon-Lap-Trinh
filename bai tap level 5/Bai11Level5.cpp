#include <iostream>
using namespace std;

void nhap(int &n);
int tinhS(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = tinhS(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;	
}
int tinhS(int n)
{
	int tich = 1;
	int	tong = 0;
	for (int i=1; i<=n; i++)
	{
		tich = tich*i;
		tong = tong + tich;
	}
	return tong;
}
void xuat(int kq)
{
	cout << kq;
}
