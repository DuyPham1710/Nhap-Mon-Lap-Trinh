#include <iostream>
using namespace std;

void nhap(int &n);
bool lasoHH(int x);
int lietkesoHH(int n);
void xuat(int kq);

int main()
{
	int n;
	nhap(n);
	int kq = lietkesoHH(n);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
bool lasoHH(int x)
{
	int sum = 0;
	for (int i=1; i<x; i++)
	{
		if(x%i==0)
			sum = sum + i;
	}
	if(sum==x)
		return true;
	return false;
}
int lietkesoHH(int n)
{
	for (int i=1; i<n; i++)
	{
		if(lasoHH(i))
			xuat(i);
	}
}
void xuat(int kq)
{
	cout << kq <<" ";
}
