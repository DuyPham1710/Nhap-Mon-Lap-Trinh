#include <iostream>
using namespace std;

void nhap(int &n);
double S(int n);
void xuat(double kq);

int main()
{
	int n;
	nhap(n);
	double kq = S(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin >> n;
}
double S(int n)
{
	double tong = 0;
	double tich = 1;
	double thuong = 0;
	double S = 0;
	for (int i=1; i<=n; i++)
	{
		tong = tong + i;
		tich = tich*i;
		thuong = tong/tich;
		S = S + thuong;
	}
	return S;
}
void xuat(double kq)
{
	cout << kq;
}
