#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n, int &k);
void xoaphantucuoicung(int A[], int n, int k);
void dichphaixoayvong(int A[], int n, int k);
void xuat(int A[], int n);

int main(){
	int A[MAX],n,k;
	nhap(A,n,k);
	dichphaixoayvong(A,n,k);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n, int &k){
	cin>>n>>k;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void xoaphantucuoicung(int A[], int n, int k){
	for (int i=k; i>0; i--)
		A[i] = A[i-1];
}
void dichphaixoayvong(int A[], int n, int k){
	while (k>0){
		int x = A[n-1];
		xoaphantucuoicung(A,n,n-1);
		A[0] = x;
		k--;
	}
}
void xuat(int A[], int n){
	cout<<endl;
	for (int i=0; i<n;i++)
		cout<<A[i]<<" ";
}
