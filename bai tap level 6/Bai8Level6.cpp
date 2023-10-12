#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool kiemtraso0(int A[], int n);
void xuat(bool kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	bool kq = kiemtraso0(A,n);
	xuat(kq);
	return 0;	
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtraso0(int A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]==0)
			return true;
	return false;
}
void xuat(bool kq){
	cout<<kq;
}
