#include <iostream>
using namespace std;

void nhap(int &a, int &b);
int tinhtong(int a, int b);
void xuat(int kq);

int main()
{
    int a,b;
    nhap(a,b);
    int kq = tinhtong(a,b);
    xuat(kq);
    return 0;
}
void nhap(int &a, int &b)
{
    cin>>a>>b;
}
int tinhtong(int a, int b)
{
    int t = a + b;
    return t;
}
void xuat(int kq)
{
    cout << kq;
}
