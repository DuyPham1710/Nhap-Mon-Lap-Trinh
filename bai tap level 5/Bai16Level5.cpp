#include <iostream>
using namespace std;

void nhap(long &n);
long ruttien(long n, long &soto100, long &soto50, long &soto20, long &soto10);
void xuat(long kq, long soto100, long soto50, long soto20, long soto10);

int main()
{
	long n;
	long soto100 = 0;
	long soto50 = 0;
	long soto20 = 0;
	long soto10 = 0;
	nhap(n);
	long kq = ruttien(n,soto100,soto50,soto20,soto10);
	xuat(kq,soto100,soto50,soto20,soto10);
	return 0;
}
void nhap(long &n)
{;
	cin>>n;
}
long ruttien(long n, long &soto100, long &soto50, long &soto20, long &soto10)
{
	while(n!=0)
	{
		if(n%10000!=0){
			return 0;
		}
		else if(n>=100000)
		{
			n=n-100000; 
			soto100++;
		}
		else if(n>=50000 && n<100000)
		{
			n=n-50000;
			soto50++;
		}
		else if(n>=20000 && n<50000)
		{
			n=n-20000;
			soto20++;
		}
		else if(n==10000)
		{
			n=n-10000;
			soto10++;
		}	
	}
}
void xuat(long kq, long soto100, long soto50, long soto20, long soto10)
{
	if(kq==0)
		cout<<"khong hop le !"<<endl;
	else
	{
		cout<<"so to 100.000: "<<soto100<<endl;
		cout<<"so to 50.000: "<<soto50<<endl;
		cout<<"so to 20.000: "<<soto20<<endl;
		cout<<"so to 10.000: "<<soto10<<endl;
	}
}
