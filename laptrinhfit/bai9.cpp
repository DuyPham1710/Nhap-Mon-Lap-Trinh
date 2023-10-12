#include <iostream>
#define MAX 10000
using namespace std;

void nhap(int A[], int &n);
int dem(int A[], int n, int x);
int xuly(int A[], int n, int B[], int &nB);
void xuat(int kq);

int main(){
	int A[MAX],n,B[MAX],nB;
	nhap(A,n);
	int kq = xuly(A,n,B,nB);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
	cin>>A[i];
}
int dem(int A[], int n, int x){
	int dem = 0;
	for (int i=0; i<n; i++)
		if(A[i]==x)
			dem++;
	return dem;
}
int xuly(int A[], int n, int B[], int &nB){
	nB = 0;
	for (int i=0; i<n; i++)
		if(dem(B,nB,A[i])==0)
			B[nB++] = A[i];
	for (int i=0; i<nB; i++)
		if(dem(A,n,B[i])>1)
			return i;
	return -1;
}
void xuat(int kq){
	cout<<kq;
}
