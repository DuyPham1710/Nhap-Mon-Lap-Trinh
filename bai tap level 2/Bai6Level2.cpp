#include <iostream>
using namespace std;

void nhap(float &a, float &b, float &c);
int xettamgiac(float a, float b, float c);
void xuat(int kq);

int main()
{
    float a,b,c;
    nhap(a,b,c);
    int kq = xettamgiac(a,b,c);
    xuat(kq);
    return 0;
}
void nhap(float &a, float &b, float &c)
{
    cin >> a >> b >> c;
}
int xettamgiac(float a, float b, float c)
{
    if(a>0 && b>0 && c>0 && b+c>a && a+c>b && a+b>c)
    {   
        if(a==b && b==c && c==a)
            return 1;
        if(a==b || b==c || c==a)
            if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
                return 3;
            else
                return 4;
        else
            if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
                return 2;
            else 
                return 5;
    }
    else
        return 0;
}   
void xuat(int kq)
{
    if(kq == 0)
        cout << "khong la 1 tam giac!";
    else
        if(kq == 1)
            cout << "la tam giac deu!";
        else
            if(kq == 2)
                cout << "la tam giac vuong";
            else
                if(kq == 3)
                    cout << "la tam giac vuong can!";
                else
                    if(kq == 4)
                        cout << "la tam giac can!";
                    else
                        cout << "la tam giac thuong!";

}
