#include <iostream>
using namespace std;

void nhap(int &a, int &b, int&c);
int giatrinhonhi(int a, int b, int c);
void xuat(int kq);

int main()
{
    int a,b,c;
    nhap(a,b,c);
    int kq = giatrinhonhi(a,b,c);
    xuat(kq);
    return 0;
}
void nhap(int &a, int &b, int&c)
{
    cin >> a >> b >> c;
}
int giatrinhonhi(int a, int b, int c)
{
    if(a==b || b==c || a==c)
        return 0;
    else
        if(a>b && b>c || c>b && b>a) 
            return b;
        else
            if(a>c && c>b || b>c && c>a)
                return c;
            else
                return a;
}
void xuat(int kq)
{
    if(kq==0)
        cout << "khong hop le";
    else
       cout<<kq;
}
