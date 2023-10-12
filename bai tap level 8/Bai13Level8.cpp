#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int UCLN(int a,int b);
int timUCLN(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = timUCLN(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int UCLN(int a,int b){
	while(a!=b){
		if(a>b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
int timUCLN(int A[], int n){
	int x = A[0];
	for(int i=1; i<n; i++)
		x = UCLN(x,A[i]);
	return x;
}
void xuat(int kq){
	cout<<kq;
}
