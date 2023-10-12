#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
int lietke297(int A[], int n);
void xuat(int kq);

int main(){
	int A[MAX],n;
	nhap(A,n);
	lietke297(A,n);
	return 0; 
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int lietke297(int A[], int n){
	for (int i=0; i<n-1; i++)
		if(A[i] > abs(A[i+1]))
			xuat(A[i]);
}
void xuat(int kq){
	cout<<kq<<" ";
}
