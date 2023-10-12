#include <iostream>
#define MAX 200
using namespace std;

void nhap(long A[], int &n);
int tangnghiemngat(long A[], int n);
void xuat(int kq);

int main(){
	long A[MAX]; 
	int n;
	nhap(A,n);
	int kq = tangnghiemngat(A,n);
	xuat(kq);
	return 0;
}
void nhap(long A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int tangnghiemngat(long A[], int n){
	for (int i=1; i<n; i++)
		if(A[i-1]>=A[i])
			return i;
	return -1;
}
void xuat(int kq){
	cout<<kq;
}
