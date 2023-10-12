#include <iostream>
using namespace std;

void nhap(int &n);
int uocsoleMax(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = uocsoleMax(n);
	xuat(kq);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
int uocsoleMax(int n)
{
	int max = 0;
	for (int i=1; i<=n; i++)
	{
		if(n%i==0 && i%2!=0)
			if(i>max)
				max = i;
	}
	return max;
}
void xuat(int kq)
{
	cout<<kq;
}
