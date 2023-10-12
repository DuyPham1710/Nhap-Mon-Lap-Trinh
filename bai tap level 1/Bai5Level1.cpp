#include <iostream>
using namespace std;

void nhap(int &nam);
bool namnhuan(int nam);
void xuat(bool n);

int main()
{
    int year;
    nhap(year);
    bool n = namnhuan(year);
    xuat(n);
    return 0;
}
void nhap(int &year)
{
    cin >> year;
}  
bool namnhuan(int year)
{
    if( (year%4==0 && year%100 !=0) || (year%400 == 0) )  
        return true;
    else
        return false;   
}
void xuat(bool n)
{
    if(n==true)
        cout<<"la nam nhuan";
    else
        cout << "khong la nam nhuan";
}


