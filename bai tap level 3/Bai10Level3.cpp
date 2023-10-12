#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &n);
int SUM(int a, int b, int n);
void xuat(int kq);

int main()
{
    int a,b,n;
    nhap(a,b,n);
    int kq = SUM(a,b,n);
    xuat(kq);
    return 0;
}
void nhap(int &a, int &b, int &n)
{
   	cin >> a >> b >> n;
}
int SUM(int a, int b, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%a==0 && i%b!=0)
            sum = sum + i;
    }
    return sum;
}
void xuat(int kq)
{
    cout << kq;
}
