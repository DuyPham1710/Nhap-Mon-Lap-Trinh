#include <iostream>
using namespace std;

void nhap(int &n);
bool lasoNT(int x);
int dem(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = dem(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool lasoNT(int x)
{
	int temp = 0;
	for (int i=1; i<=x; i++)
	{
		if(x%i==0)
			temp++;
	}
	if(temp==2)
		return true;
	return false;
}
int dem(int n)
{
	int dem = 0;
	for (int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			if(lasoNT(i))
				dem++;
		}
	}
	return dem;
}
void xuat(int kq)
{
	cout << kq;
}
