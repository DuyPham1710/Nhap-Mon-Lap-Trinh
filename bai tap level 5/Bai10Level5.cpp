#include <iostream>
using namespace std;

int tim(int &a, int &b);
void xuat(int kq);

int main()
{
	int a,b;
	int kq = tim(a,b);
	return 0;	
}
int tim(int &a, int &b)
{
	for(int i=10; i<=99; i++)
	{
		b = i%10;
		a = i/10;
		if(a*b == 2*(a+b))
			xuat(i);
	}
}
void xuat(int kq)
{
	cout << kq <<" ";
}
