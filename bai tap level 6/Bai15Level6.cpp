#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int timsochandautien(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = timsochandautien(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int timsochandautien(int A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]%2==0)
			return A[i];
	return -1;
}
void xuat(int kq){
	cout<<kq;
}
