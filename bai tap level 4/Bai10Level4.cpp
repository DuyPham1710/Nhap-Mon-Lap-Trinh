#include <iostream>
using namespace std;

void nhap(long long &n);
long long Fibonacci(long long n);
void xuat(long long kq);

int main()
{
    long long n;
    nhap(n);
    long long kq = Fibonacci(n);
    return 0;
}
void nhap(long long &n)
{
    cin >> n;
}
long long Fibonacci(long long n)
{
    long long f1,f2,fn;
    	f1 = 0;
    	f2 = 1;
    	fn = 0;
        for (long long i = 0; i < n; i++)
        {
            f1 = f2;
            f2 = fn;
            fn = f1 + f2;
            //xuat(fn);
        }
    cout<<fn;
}
void xuat(long long kq)
{
    cout << kq << " ";
}


