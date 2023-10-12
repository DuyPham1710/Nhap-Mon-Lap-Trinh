#include <iostream>
using namespace std;

void nhap(int &a, int &b);
int tinhthuong(int a, int b, float &thuong);
void xuat(int kq, float thuong);

int main()
{
    int a,b;
    nhap(a,b);
    float thuong;
    int kq = tinhthuong(a,b,thuong);
    xuat(kq,thuong);
    return 0;
}
void nhap(int &a, int &b)
{
    cin>>a>>b;
}
int tinhthuong(int a, int b, float &thuong)
{
    if(b==0)
        return 0;
    else
    {
        thuong = float(a)/b;
        return 1;
    }
}
void xuat(int kq, float thuong)
{
    if (kq == 1)
        cout << thuong;
    else
        cout << "chia khong duoc";
}
