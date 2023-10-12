#include <iostream>
using namespace std;

void nhap(int &n);
int kiemtratangdan(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = kiemtratangdan(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin>>n;
}
int kiemtratangdan(int n)
{
    int max = n%10;
        n = n/10;
    while (n!=0)
    {
        int temp = n%10;
            n = n/10;
        if(temp<max)
            max = temp;
        else
            return 0;
    }
}
void xuat(int kq)
{
    if(kq==0)
        cout << "khong tang dan" << endl;
    else
        cout << "tang dan" << endl;
}
