#include <iostream>
using namespace std;

void nhap(int &n);
int S(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = S(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin >> n; 
}
int S(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i*i;
    }
    return sum;
}
void xuat(int kq)
{
    cout << kq;
}
