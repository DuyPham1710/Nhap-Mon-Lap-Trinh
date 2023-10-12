#include <iostream>
using namespace std;

void nhap(int &h, int &m, int &s);
bool hople(int h, int m, int s);
bool time(int h, int m, int s, int &h1, int &m1, int &s1);
void xuat(bool gio, int h1, int m1, int s1);

int main()
{
    int h,m,s,h1,m1,s1;
    nhap(h,m,s);
    bool gio = time(h,m,s,h1,m1,s1);
    xuat(gio,h1,m1,s1);
    return 0;
}
void nhap(int &h, int &m, int &s)
{
    cin >> h >> m >> s;
}
bool hople(int h, int m, int s)
{
    if(h>=0 && h<=59 && m>=0 && m<=59 && s>=0 && s<=59)
        return true;
    return false;
}
bool time(int h, int m, int s, int &h1, int &m1, int &s1)
{
    if(hople(h,m,s))
    {
        h1 = h;
        m1 = m;
        s1 = s + 1;
        if(s1==60)
        {
            s1 = 0;
            m1++;
            if(m1 == 60)
            {
                m1 = 0;
                h1++;
                if(h1 == 24)
                    h1 = 0;
            }
        }
        return true;
    }
    else
        return false;
}
void xuat(bool gio, int h1, int m1, int s1)
{
    if(gio==false)
        cout << "khong hop le";
    else
        cout << h1 <<" "<< m1 <<" "<< s1;
}
