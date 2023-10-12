#include <iostream>
using namespace std;

void nhap(char &n);
char doi(char n);
void xuat(char kq);

int main()
{
    char n;
    nhap(n);
    char kq = doi(n);
    xuat(kq);
    return 0;
}
void nhap(char &n)
{
    cin>>n;
}
char doi(char n)
{
    char kq;
    if(n>='a' && n<= 'z') 
    {
        kq = n - 32;
        return kq;
    }   
    else
    {
        kq = n + 32;
        return kq;
    }   
}
void xuat(char kq)
{
    cout << kq;
}

