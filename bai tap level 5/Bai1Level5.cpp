#include <iostream>
using namespace std;

void nhap(int &n);
bool laNT(int x);
int lietkesoNT(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = lietkesoNT(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool laNT(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
	{
		if(x%i==0)
			dem++;
	}
	if(dem==2)
		return true;
	return false;
}
int lietkesoNT(int n)
{
	for (int i = 1; i < n; i++)
	{
		if(laNT(i))
			xuat(i);
	}
}
void xuat(int kq)
{
	cout << kq <<" ";
}
