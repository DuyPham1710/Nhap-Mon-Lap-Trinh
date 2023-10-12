#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
void xoaphantudautien(int A[], int n, int k);
void dichtraixoayvong(int A[], int n);
void xuat(int A[], int n);

int main(){
	int A[MAX],n;
	nhap(A,n);
	dichtraixoayvong(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void xoaphantudautien(int A[], int n, int k){
	for (int i=k; i<n-1; i++)
		A[i] = A[i+1];
}
void dichtraixoayvong(int A[], int n){
		int x = A[0];
		xoaphantudautien(A,n,0);
		A[n-1] = x;
}
void xuat(int A[], int n){
	cout<<endl;
	for (int i=0; i<n;i++)
		cout<<A[i]<<" ";
}
