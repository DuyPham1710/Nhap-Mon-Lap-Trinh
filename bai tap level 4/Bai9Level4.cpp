#include <iostream>
using namespace std;

void nhap(int &n);
int kiemtragiamdan(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = kiemtragiamdan(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin>>n;
}
int kiemtragiamdan(int n)
{
    int min = n%10;
        n = n/10;
    while (n!=0)
    {
        int temp = n%10;
            n = n/10;
        if(temp>min)
            min = temp;
        else
            return 0;
    }
}
void xuat(int kq)
{
    if(kq==0)
        cout << "khong giam dan" << endl;
    else
        cout << "giam dan" << endl;
}
