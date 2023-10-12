#include <iostream>
using namespace std;

void nhap(int &n);
int sochan(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = sochan(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
   	cin >> n;
}
int sochan(int n)
{
    while(n!=0)
    {	
        int x = n%10;
        	n = n/10;
        if(x%2!=0)
            return 0;
    }
    return 1;
}
void xuat(int kq)
{
    if(kq==0)
        cout << "co so le" << endl;
    else
        cout << "chi so chan" << endl;
}
