#include <iostream>
using namespace std;

void nhap(int &n);
int sodoixung(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = sodoixung(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;  
}
int sodoixung(int n)
{
    int s=0;
    int t=n;
    while(n!=0)  
    {
        int x = n%10;
        	n = n/10;
        s = s*10 + x;
    }
    if(s==t)
        return 1;
    else
        return 0;
}
void xuat(int kq)
{ 
    if(kq==0)
        cout << "khong la so doi xung" << endl;
    else
        cout << "la so doi xung" << endl;
}
