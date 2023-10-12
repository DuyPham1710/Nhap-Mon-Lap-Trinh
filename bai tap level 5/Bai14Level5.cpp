#include <iostream>
using namespace std;

void nhap(int &n, int &k);
int tohop(int n, int k);
void xuat(int kq);

int main()
{
	int n,k;
	nhap(n,k);
	int kq = tohop(n,k);
	xuat(kq);
	return 0;
}
void nhap(int &n, int &k)
{
	cin>>n>>k;
}
int tohop(int n, int k)
{
	int C = 1;
	for (int i=1; i<=k; i++)
	{
		C = C*n/i;
		n--; 
	}
	return C;
}
void xuat(int kq)
{
	cout << kq;
}
