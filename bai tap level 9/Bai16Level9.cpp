#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
bool timthay(int A[], int n, int x);
void xuly(int A[], int nA, int B[], int &nB);
void xuat(int A[], int n);

int main(){
	int A[MAX],nA,B[MAX],nB;
	nhap(A,nA);
	xuly(A,nA,B,nB);
	xuat(B,nB);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int hoandoi(int &a, int &b){
	int t = a;
		a = b;
		b = t;
}
bool timthay(int A[], int n, int x){
	for (int i=0; i<n; i++)
		if(A[i]==x)
			return true;
	return false;
}
void xuly(int A[], int nA, int B[], int &nB){
	nB = 0;
	int x = 0;
	for (int i=0; i<nA; i++){
		if(A[i]%2==0 && A[i]!=0)
			B[nB++] = A[i];
	}
	for (int i=0; i<nA; i++){
		if(A[i]==0)
			B[nB++] = A[i];
	}
	for (int i=0; i<nA; i++){
		if(A[i]%2!=0)
			B[nB++] = A[i];
	} 
}
void xuat(int A[], int n){
	cout<<endl;
	for (int i=0; i<n;i++)
		cout<<A[i]<<" ";
}
