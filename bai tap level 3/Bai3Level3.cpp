#include <iostream>
using namespace std;

void nhap(int &n);
double S(int n);
void xuat(double kq);

int main()
{
    int n;
    nhap(n);
    double kq = S(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;
}
double S(int n)
{
    double sum = 0;
    for (double i = 1; i <= n ; i++)
    {
        sum = sum + 1/i;
    }
    return sum;
}
void xuat(double kq)
{
    cout << kq;
}
