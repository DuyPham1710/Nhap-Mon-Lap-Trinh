#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;

void nhap(long long A[], int &n, int &x);
long long TBC(long long A[], int n, int x);
void xuat(int kq);

int main(){
	long long A[MAX];
	int n,x;
	nhap(A,n,x);
	long long kq = TBC(A,n,x);
	xuat(kq);
	return 0;
}
long long TBC(long long A[], int n, int x){
	int dem = 0;
	long long t = 0;
	for (int i=0; i<n; i++){
		if(A[i]%x!=0){
			t += A[i];
			dem++;
		}
	}
	double TB = (double)t/dem;
	TB = round(TB);
	return TB;
	
}
void nhap(long long A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void xuat(int kq){
	cout<<kq;
}
