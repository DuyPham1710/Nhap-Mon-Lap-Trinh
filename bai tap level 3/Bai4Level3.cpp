#include <iostream>
using namespace std;

void nhap(int &n);
int GiaiThua(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = GiaiThua(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin >> n;
}
int GiaiThua(int n)
{
    int sum = 1;
    for (int i = 1;i <= n; i++)
    {
        sum = sum*i;
    }
    return sum;
}
void xuat(int kq)
{
	cout << kq;
}
