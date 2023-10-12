#include <iostream>
using namespace std;

void nhap(int &n);
int timmax(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = timmax(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n; 
}
int timmax(int n)
{
    int max=0;
    while(n!=0)
    {    
        int x = n%10;
			n = n/10;   
        if(x > max)
            max = x;
    }
    return max; 
}
void xuat(int kq)
{
    cout << kq;
}
