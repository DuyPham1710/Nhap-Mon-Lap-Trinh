#include <iostream>
using namespace std;

void nhap(int &n);
int uocso(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = uocso(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin>>n;
}
int uocso(int n)
{
    int sum = 0;
    for (int i=1; i<=n; i++)
    {
        if(n%i==0)
            sum = sum + i;
    }
    return sum;
}
void xuat(int kq)
{
    cout << kq;
}
