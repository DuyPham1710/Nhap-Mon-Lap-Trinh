#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int B[], int &n);
void tron_2_mang(int A[], int B[], int C[], int n, int &nC);
void xuat(int C[], int nC);

int main(){
	int A[MAX],B[MAX],n;
	nhap(A,B,n);
	int C[MAX*2],nC;
	tron_2_mang(A,B,C,n,nC);
	xuat(C,nC);
	return 0;
}
void nhap(int A[], int B[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
	for (int i=0; i<n; i++)
		cin>>B[i];
}
void tron_2_mang(int A[], int B[], int C[], int n, int &nC){
	int iA = 0;
	int iB = 0;
	nC = 0;	
	for (int i=0; i<n; i++){
		C[nC++] = A[i];
		C[nC++] = B[i];
	}
}
void xuat(int C[], int nC){
	for (int i=0; i<nC; i++)
		cout<<C[i]<<" ";
}
