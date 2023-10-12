#include <iostream>
using namespace std;

void nhap(int &n);
bool laNT(int x);
int chusoNT(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = chusoNT(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;   
}
bool laNT(int x)
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
int chusoNT(int n)
{
	int dem = 0;
	while(n!=0)
	{
		int z = n%10;
			n = n/10;
		if(laNT(z))
			dem++;
	}
	return dem;	
}
void xuat(int kq)
{
   	cout << kq;
}
