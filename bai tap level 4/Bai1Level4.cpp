#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n);
int sochinhphuong(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = sochinhphuong(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin>>n;
}
int sochinhphuong(int n)
{
    if(sqrt(n)==int(sqrt(n)))
        return 1;
    else
        return 0;
}
void xuat(int kq)
{
    if(kq==0)
        cout <<"khong la so chinh phuong" << endl;
    else
        cout <<"la so chinh phuong" << endl;
}
