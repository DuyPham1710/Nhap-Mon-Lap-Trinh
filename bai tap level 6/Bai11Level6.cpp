#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x);
bool kiemtra297(int A[], int n, int x);
void xuat(bool kq);

int main(){
	int A[1000],n,x;
	nhap(A,n,x);
	bool kq = kiemtra297(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtra297(int A[], int n, int x){
	for (int i=0; i<n; i++)
		if(A[i]==x)
			return true;
	return false;
}
void xuat(bool kq){
	cout<<kq;
}
