#include <iostream>
using namespace std;

void nhap(int &n);
bool laHH(int x);
int demsoHH(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = demsoHH(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool laHH(int x)
{
	int tong=0;
	for (int i = 1; i < x; i++)
	{
		if(x%i==0)
			tong = tong + i;
	}
	if(tong==x)
		return true;
	return false;
}
int demsoHH(int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		if(laHH(i))
			dem++;
	}
	return dem;
}
void xuat(int kq)
{
	cout<<kq;
}
