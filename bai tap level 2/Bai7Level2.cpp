#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &a, int &b, int &c);
int ptb2(int a, int b, int c, float &x1, float &x2);
void xuat(int kq, float x1, float x2);

int main()
{
    int a,b,c;
    nhap(a,b,c);
    float x1, x2;
    int kq = ptb2(a,b,c,x1,x2);
    xuat(kq,x1,x2);
    return 0;
}
void nhap(int &a, int &b, int &c)
{
    cin >> a >> b >> c;
}
int ptb2(int a, int b, int c, float &x1, float &x2)
{
    if(a==0)
        if(b==0)
            if(c==0)
                return 4;
            else
                return 0;
        else    
        {
            x1 = float(-c)/b;
            return 1;
        }
    else
    {
        float delta = b*b - 4*a*c;
        if(delta < 0)
            return 0;
        else
            if(delta == 0)
            {
                x1 = -b/(2*a);
                return 3;
            }
            else
            {
                x1 = (-b - sqrt(delta))/(2*a);
                x2 = (-b + sqrt(delta))/(2*a);
                return 2;
            }
    }
}   
void xuat(int kq, float x1, float x2)
{
    if(kq==0)
        cout << "phuong trinh vo nghiem";
    else
        if(kq==1)
            cout << "phuong trinh co 1 nghiem duy nhat x = " << x1;
        else
            if(kq==2)
                cout << "phuong trinh co 2 nghiem phan biet\n" << "x1 = " << x1 << "\n" << "x2 = "<< x2;
            else
                if(kq==3)
                    cout << "phuong trinh co nghiem kep\n " << "x1 = x2 = " << x1;
                else
                    cout << "phuong trinh co nghiem tuy y";

}
