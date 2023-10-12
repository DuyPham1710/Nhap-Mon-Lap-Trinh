#include <iostream>
using namespace std;

void nhap(int &month, int &year);
bool lanamnhuan(int year);
int thangnam(int month, int year);
void xuat(int songay);

int main()
{
    int month, year;
    nhap(month, year);
    int songay = thangnam(month, year);
    xuat(songay);
    return 0;
}
void nhap(int &month, int &year)
{
    cin >> month >> year;
}
bool lanamnhuan(int year)
{
    if(year % 4 == 0 && year %100 != 0 || year % 400 == 0)
        return true;
    return false;
}
int thangnam(int month, int year)
{
    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if(lanamnhuan(year))
            return 29;
        else 
            return 28;
    default: return 31;
    }
}
void xuat(int songay)
{
    cout << songay;
}
