#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n); 
int trituyetdoi(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = trituyetdoi(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin >> n;
}
int trituyetdoi(int n)
{
    int x = abs(n);
    return x;
}
void xuat(int kq)
{
    cout<<kq;
}
