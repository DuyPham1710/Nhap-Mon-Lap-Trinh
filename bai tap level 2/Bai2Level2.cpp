#include <iostream>
using namespace std;

void nhap(int &a, int &b);
int ptb1(int a, int b, float &nghiem);
void xuat(int kq, float nghiem);

int main()
{
    int a,b;
    nhap(a,b);
    float nghiem;
    int kq = ptb1(a,b,nghiem);
    xuat(kq,nghiem);
    return 0;
}
void nhap(int &a, int &b)
{
    cin>>a>>b;
}
int ptb1(int a, int b, float &nghiem)
{
    if(a == 0)
        if(b == 0)
            return 0;
        else
            return 1;
    else
    {
        nghiem = float(-b)/a;
        return 2;
    }
}
void xuat(int kq, float nghiem)
{
    if(kq == 0)
        cout << "pt co nghiem tuy y";
    else
        if(kq == 1)
            cout << "phuong trinh vo nghiem!";
        else
            if(kq == 2)
                cout << nghiem << endl;
}   
