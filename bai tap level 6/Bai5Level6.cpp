#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int tinhtongsochan(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = tinhtongsochan(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
int tinhtongsochan(int A[], int n){
	int t = 0;
	for (int i=0; i<n; i++){
		if(A[i]%2==0)
			t = t + A[i];
	}
	return t;
}
void xuat(int kq){
	cout<<kq;
}
