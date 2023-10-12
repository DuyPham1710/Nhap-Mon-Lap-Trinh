#include <iostream>
using namespace std;

void nhap(float &a);
int kiemtra(float a);
void xuat(int kq);

int main()
{
    float a;
    nhap(a);
    int kq = kiemtra(a);
    xuat(kq);
    return 0;
}
void nhap(float &a)
{
    cin>>a;
}
int kiemtra(float a)
{
    if(a==int(a))
        return int(a - 1);
    else
        return int(a);
}
void xuat(int kq)
{
    cout<<kq;
}
