#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int hoandoi(int &a, int &b);
void sapxepgiamdan(int A[], int n);
void xuat(int A[], int n);

int main(){
	int A[1000],n;
	nhap(A,n);
	sapxepgiamdan(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int hoandoi(int &a, int &b){
	int t=a;
		a=b;
		b=t;
}
void sapxepgiamdan(int A[], int n){
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if(A[i]<A[j])
				hoandoi(A[i],A[j]);
}
void xuat(int A[], int n){
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
