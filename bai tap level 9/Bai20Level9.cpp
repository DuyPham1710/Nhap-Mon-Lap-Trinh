#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
void tronxenke(int A[], int nA, int B[], int nB, int C[], int &nC);
void xuat(int A[], int n);

int main(){
	int A[MAX],nA,B[MAX],nB,C[MAX*2],nC;
	nhap(A,nA);
	nhap(B,nB);
	tronxenke(A,nA,B,nB,C,nC);
	xuat(C,nC);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void tronxenke(int A[], int nA, int B[], int nB, int C[], int &nC){
	int iA = 0;
	int iB = 0;
	while (iA<nA && iB<nB){
		C[nC++] = A[iA++];
		C[nC++] = B[iB++];
	}
	while (iA<nA)
		C[nC++] = A[iA++];
	while (iB<nB)
		C[nC++] = B[iB++];
}
void xuat(int A[], int n){
	cout<<"Mang C:"<<endl;
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
