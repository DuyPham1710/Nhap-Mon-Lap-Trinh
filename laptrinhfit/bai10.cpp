#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
int xuly(int A[], int n);
long long max(long long a, long long b);
void xuat(int kq);

int main(){
	int A[MAX],n;
	nhap(A,n);
	int kq = xuly(A,n);	
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
	cin>>A[i];
}
int xuly(int A[], int n){
	long long t1 = 0;
	long long t2 = -1e18;
	for (int i=0; i<n; i++){
		t1 += A[i];
		t2 = max(t1,t2);
		if(t1<0)
			t1 = 0;	
	}
	return t2;	
}
long long max(long long a, long long b){
	if(a>b)
		return a;
	else
		return b;
}
void xuat(int kq){
	cout<<kq;
}
