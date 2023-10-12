#include <iostream>
#include <math.h>
using namespace std;

void nhap(float &a);
float lamtron(float a);
void xuat(float a);

int main()
{
    float a;
    nhap(a);
    float kq = lamtron(a);
    xuat(kq);
    return 0;
}
void nhap(float &a)
{
    cin>>a;
}
float lamtron(float a)
{
    int b = round(a);
    return b;
}
void xuat(float kq)
{
    cout << kq;
}

