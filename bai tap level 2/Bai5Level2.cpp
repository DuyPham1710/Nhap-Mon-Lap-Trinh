#include <iostream>
using namespace std;

void nhap(float &a, float &b, float &c, float &d);
float GTLN(float a, float b, float c, float d, float &max);
void xuat(float kq);

int main()
{
    float a,b,c,d,max;
    nhap(a,b,c,d);
    float kq = GTLN(a,b,c,d,max);
    xuat(kq);
    return 0;
}
void nhap(float &a, float &b, float &c, float &d)
{
    cin >> a >> b >> c >> d;
}
float GTLN(float a, float b, float c, float d, float &max)
{
    max = a;
    if(b>max)
    	max = b;
    if(c>max)
    	max = c;
    if(d>max)
    	max = d;
    return max;
}
void xuat(float kq)
{
    cout << kq;
}
