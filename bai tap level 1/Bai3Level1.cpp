#include <iostream>
#include <iomanip>
using namespace std;

void nhap(float &a, float &b);
float chuvi(float a, float b);
void xuat(float kq);

int main()
{
    float a,b;
    nhap(a,b);
    float kq = chuvi(a,b);
    xuat(kq);
    return 0;
}
void nhap(float &a, float &b)
{
    cin >> a >> b;
}
float chuvi(float a, float b)
{
    float c = (a + b)*2;
    return c;
}
void xuat(float kq)
{
    cout << fixed << setprecision(2) << kq << endl;
}
