#include <iostream>
#include <math.h>
using namespace std;

void nhap(double &a, double &b, double &c);
int ptb2(double a, double b, double c);
void xuat(int kq);

int main()
{
    double a,b,c;
    nhap(a,b,c);
    int kq = ptb2(a,b,c);
    xuat(kq);
    return 0;
}
void nhap(double &a, double &b, double &c)
{
    cin>>a>>b>>c;
}
int ptb2(double a, double b, double c)
{
    if(a==0)
        if(b==0)
            if(c==0)
                return 4;
            else
                return 0;
        else    
        {
            return 1;
        }
    else
    {
        double delta = b*b - 4*a*c;
        if(delta < 0)
            return 0;
        else
            if(delta == 0)
            {
                return 3;
            }
            else
            {
                return 2;
            }
    }
}   
void xuat(int kq)
{
	cout<<kq;
}
