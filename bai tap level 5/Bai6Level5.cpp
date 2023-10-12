#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n);
bool lasoCP(int x);
int demsoCP(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = demsoCP(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool lasoCP(int x)
{
	if(sqrt(x)==int(sqrt(x)))
		return true;
	return false;
}
int demsoCP(int n)
{
	int dem = 0;
	for (int i=1; i<n; i++)
	{
		if(lasoCP(i))
			dem++;
	}
	return dem;
}
void xuat(int kq)
{
	cout << kq;
}
