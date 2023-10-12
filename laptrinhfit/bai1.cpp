#include <iostream>
#include <math.h>
#define MAX 10000
using namespace std;

void nhap(int A[], int &n);
int khoangcachnhonhat(int A[], int n, int B[], int &nB);
void xuat(int kq);

int main(){
	int A[MAX],n,B[MAX],nB;
	nhap(A,n);
	int kq = khoangcachnhonhat(A,n,B,nB);
	xuat(kq);
	return 0;
}
int khoangcachnhonhat(int A[], int n, int B[], int &nB){
	nB = 0;
	for (int i=0; i<n-1; i++){
			B[nB++] = abs(A[i]-A[i+1]);
	}
	int min = B[0];
	for (int i=1; i<nB; i++)
		if(B[i]<min)
			min = B[i];
	return min; 
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void xuat(int kq){
	cout<<kq;
}
