#include <iostream>
using namespace std;

void nhap(int &n);
int sohoanhao(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = sohoanhao(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;  
}
int sohoanhao(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++) 
    {
        if(n%i==0)
            sum = sum + i;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
void xuat(int kq)
{
    if(kq==0)
        cout << "khong la so hoan hao" << endl;
    else
        cout << "la so hoan hao" << endl;
}
