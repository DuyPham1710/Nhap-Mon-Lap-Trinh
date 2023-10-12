#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
bool timthay(int A[], int nA, int x);
bool kiemtra(int A[], int nA, int B[], int nB);
void xuat(bool kq);

int main(){
	int A[MAX],nA,B[MAX],nB;
	nhap(A,nA);
	nhap(B,nB);
	bool kq = kiemtra(A,nA,B,nB);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool timthay(int A[], int nA, int x){
	for (int i=0; i<nA; i++)
		if(A[i]==x)
			return true;
	return false;
}
bool kiemtra(int A[], int nA, int B[], int nB){
	for (int i=0; i<nA; i++)
		if(timthay(B,nB,A[i])==false)
			return false;
	return true;
}
void xuat(bool kq){
	if(kq==false)
		cout<<"khong"<<endl;
	else
		cout<<"co"<<endl;
}
