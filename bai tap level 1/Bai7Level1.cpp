#include <iostream>
using namespace std;

void nhap(float &a, float &b, float &c);
bool tamgiac(float a, float b, float c);
void xuat(bool kq);

int main()
{
    float a,b,c;
    nhap(a,b,c);
    bool kq = tamgiac(a,b,c);
    xuat(kq);
    return 0;
}
void nhap(float &a, float &b, float &c)
{
    cin>>a>>b>>c;
}
bool tamgiac(float a, float b, float c)
{
    if(a > 0 && b > 0 && c > 0 && a < b + c && b < a + c && c < a + b)
        return true;
    else
        return false;
}
void xuat(bool kq)
{
    if( kq == true )
        cout << "la 1 tam giac";
    else
        cout << "khong hop le";
}

