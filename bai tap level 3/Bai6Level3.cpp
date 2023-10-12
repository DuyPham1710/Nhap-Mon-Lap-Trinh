#include <iostream>
using namespace std;

void nhap(int &n);
int count(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = count(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;
}
int count(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            sum++;
    }
    return sum;   
}
void xuat(int kq)
{
    cout <<kq;
}
