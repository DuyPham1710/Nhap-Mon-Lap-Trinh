#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n);
bool lasoCP(int x);
int lietkesoCP(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = lietkesoCP(n);
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
int lietkesoCP(int n)
{
	for (int i=1; i<n; i++)
	{
		if(lasoCP(i))
			xuat(i);
	}
}
void xuat(int kq)
{
	cout << kq <<" ";
}
