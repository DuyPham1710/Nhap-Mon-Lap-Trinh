#include <iostream>
using namespace std;

void nhap(int &a, int &b, int &c, int &d);
int Phansotoigian(int a, int b, int c, int d, int &x1, int &x2);
void xuat(int kq, int x1, int x2);

int main()
{
	int a,b,c,d;
	nhap(a,b,c,d);
	int x1,x2;
	int kq = Phansotoigian(a,b,c,d,x1,x2);
	xuat(kq,x1,x2);
	return 0;
}
void nhap(int &a, int &b, int &c, int &d)
{
	cin>>a>>b>>c>>d;
}
int Phansotoigian(int a, int b, int c, int d, int &x1, int &x2)
{
	if(b==0 || d==0)
		return 0;
	else
	{
		x1 = a*d + b*c;
		x2 = b*d;
		int a=x1;
			b=x2;
		while(a!=b)
		{
			if(a > b)
				a = a - b;
			else
				b = b - a;
		}
		int ucln = a;
		x1 = x1/ucln;
		x2 = x2/ucln;
	}
	return 1;
}
void xuat(int kq, int x1, int x2)
{
	if(kq==0)
		cout<<"khong hop le !!"<<endl;
	else
		cout << x1 <<"/"<<x2;
}
