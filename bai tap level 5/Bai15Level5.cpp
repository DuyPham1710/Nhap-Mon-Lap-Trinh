#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n, double &x);
double tinh(int n, double x);
void xuat(double kq);

int main()
{
	int n;
	double x;
	nhap(n,x);
	double kq = tinh(n,x);
	xuat(kq);
	return 0;
}
void nhap(int &n, double &x)
{
	cin>>x>>n;
}
double tinh(int n, double x)
{
	double s = 0;
	for (int i=1; i<=n; i++)
	{
		s = sqrt(x+s);
	}
	return s;
}
void xuat(double kq)
{
	cout << kq;
}
