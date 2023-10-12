#include <iostream>
using namespace std;

void nhap(int &n);
int songuoclai(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = songuoclai(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;
}
int songuoclai(int n)
{
    int sum = 0;
    while (n!=0)
    {
        int x = n % 10;
        	n=n/10;
        sum = sum*10 + x;
    }
    return sum;
}
void xuat(int kq)
{
    cout << kq;
}
