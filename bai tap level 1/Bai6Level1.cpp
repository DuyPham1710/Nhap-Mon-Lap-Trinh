#include <iostream>
using namespace std;

void nhap(int &h,int &m, int &s);
bool time(int h, int m, int s);
void xuat(bool kq);

int main()
{
    int h,m,s;
    nhap(h,m,s);
    bool kq = time(h,m,s);
    xuat(kq);
    return 0;
}
void nhap(int &h,int &m, int &s)
{
    cin>>h>>m>>s;
}
bool time(int h, int m, int s)
{
    if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59)
        return true;
    else
        return false;
}
void xuat(bool kq)
{
    if( kq==true )
        cout << "Hop le";
    else
        cout << "khong hop le" << endl;
}
