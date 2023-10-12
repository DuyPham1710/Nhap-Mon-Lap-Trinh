#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int fibo297(int A[], int n);
void xuat(int A[], int n);

int main(){
	int A[1000],n;
	nhap(A,n);
	fibo297(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
}
int fibo297(int A[], int n){
	A[0] = 1;
	A[1] = 1;
	for (int i=2; i<n; i++){
		A[i] = A[i-1] + A[i-2];
	}
}
void xuat(int A[], int n){
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
