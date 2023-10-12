#include <iostream>
using namespace std;

void nhap(long long &n);
long long tim2sokhongam(long long n, long long &m, long long &k);
void xuat(long long kq, long long m, long long k);

int main(){
	long long n;
	nhap(n);
	long long m,k;
	long long kq = tim2sokhongam(n,m,k);
	xuat(kq,m,k);
	return 0;
}
void nhap(long long &n){
	cin>>n;
}
long long tim2sokhongam(long long n, long long &m, long long &k){
	if(n%2==0){
		m = 1 + n/4;
		k = m - 2;
		if(m*m - k*k == n)
			return 1;
		else
			return 0;
	}
	else
	{
		m = (n+1)/2;
		k = m-1;
		if(m*m - k*k == n)
			return 1;
		else
			return 0;
	}
}
void xuat(long long kq, long long m, long long k){
	if(kq==0)
		cout<<"-1";
	else
		cout<<m<<" "<<k;
}
