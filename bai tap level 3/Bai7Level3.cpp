#include <iostream>
using namespace std;

void nhap(int &n);
int Tongcacso(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = Tongcacso(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;
}
int Tongcacso(int n)
{
    int sum = 0;
    while(n!=0)
    {
        int x = n % 10;
        	n = n/10;
        sum = sum + x;
    }
    return sum;
}
void xuat(int kq)
{
    cout << kq;
}
