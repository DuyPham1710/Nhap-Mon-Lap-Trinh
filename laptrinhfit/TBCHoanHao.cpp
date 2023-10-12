#include <iostream>
#include <math.h>
#define MAX 10000
using namespace std;

void nhap(long A[], long &n);
bool laHH(long x);
long TBCHH(long A[], long n);

int main(){
	long A[MAX],n;
	nhap(A,n);
	long kq = TBCHH(A,n);
	cout<<kq;
	return 0;
}
void nhap(long A[], long &n){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>A[i];
}
bool laHH(long x){
	long t = 0;
	for (int i=1; i<x; i++)
		if(x%i==0)
			t += i;
	if(t==x)
		return true;
	return false;
}
long TBCHH(long A[], long n){
	long t = 0;
	int dem = 0;
	for (int i=0; i<n; i++){
		if(laHH(A[i])){
			t += A[i];
			dem++;
		}
	}
	double TB = (double)t/dem;
	TB = round(TB);
	if(TB>1)
		return TB;
	else
		return 0;
	
}
