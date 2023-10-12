#include <iostream>
using namespace std;

void nhap(int &n);
int songuyento(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = songuyento(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;
}
int songuyento(int n)
{
    int dem = 0;
    for (int i=1; i<=n; i++)
    {
        if(n%i==0)
            dem++;
    }   
    if(dem==2)
        return 1;
    else
        return 0;
}
void xuat(int kq)
{
    if(kq==0)
        cout << "khong la so nguyen to" << endl;
    else
        cout << "la so nguyen to" << endl;
}
