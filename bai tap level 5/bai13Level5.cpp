#include <iostream>
using namespace std;

void nhap(int &n, double &x);
double TinhS(int n, double x);
void xuat(double kq);

int main()
{
	int n;
	double x;
	nhap(n,x);
	double kq = TinhS(n,x);
	xuat(kq);
	return 0;
}
void nhap(int &n, double &x)
{
	cin>>x>>n;
}
double TinhS(int n, double x)
{
	double luythua = 1;
	double tich = 1;
	double thuong = 1;
	double sum = 1;
	for (int i=1; i<=n; i++)
	{
		tich = tich*i;
		luythua = luythua*x;
		thuong = luythua/tich;
		sum = sum + thuong;
	}
	return sum;
}
void xuat(double kq)
{
	cout<<kq;
}
