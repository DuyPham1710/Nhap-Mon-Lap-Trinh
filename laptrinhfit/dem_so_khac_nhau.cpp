#include <iostream>
#define MAX 299
using namespace std;

bool timthay(double A[], int n, double x);
int demsokhacnhau(double A[], int nA, double B[], int &nB);
void nhap(double A[], int &n);
void xuat(int kq);

int main(){
	double A[MAX],B[MAX];
	int nA,nB;
	nhap(A,nA);
	int kq = demsokhacnhau(A,nA,B,nB);
	xuat(kq);
	return 0;
}
bool timthay(double A[], int n, double x){
	for (int i=0; i<n; i++)
		if(A[i]==x)
			return true;
	return false;
}
int demsokhacnhau(double A[], int nA, double B[], int &nB){
	nB = 0;
	for (int i=0; i<nA; i++)
		if(timthay(B,nB,A[i])==false)
			B[nB++] = A[i];
	return nB;
	
}
void nhap(double A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void xuat(int kq){
	cout<<kq;
}
