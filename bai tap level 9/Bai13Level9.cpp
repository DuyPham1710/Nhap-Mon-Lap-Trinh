#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
bool lasoCP(int x);
void xoa1phantuCP(int A[], int &n, int k);
void XoatatcasoCP(int A[], int &n);
void xuat(int A[], int n);

int main(){
	int A[MAX],n;
	nhap(A,n);
	XoatatcasoCP(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool lasoCP(int x){
	if(sqrt(x)==int(sqrt(x)))
		return true;
	return false;
}
void xoa1phantuCP(int A[], int &n, int k){
	for (int i=k; i<n-1; i++)
		A[i] = A[i+1];
	n--;
}
void XoatatcasoCP(int A[], int &n){         
	
	for (int i=0; i<n; i++){
		if(lasoCP(A[i])){
			xoa1phantuCP(A,n,i);
			i--;
		}
	}
}
void xuat(int A[], int n){
	cout<<endl;
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
