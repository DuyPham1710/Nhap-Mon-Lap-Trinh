#include <iostream>
using namespace std;

void nhap(int &a, int &b);
int solonnhat(int a, int b);
void xuat(int kq);

int main()
{
    int a,b;
    nhap(a,b);
    int max = solonnhat(a,b);
    xuat(max);
    return 0;
}
void nhap(int &a, int &b)
{
    cin >> a >> b;
}
int solonnhat(int a, int b)
{
	if(a > b)
		return a;
	else
    	return b;
}
void xuat(int kq)
{
    cout << kq;
}
