#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &nA);
void hoandoi(int &a, int &b);
void tronmangtangdan(int A[], int B[], int C[], int nA, int nB, int &nC);
void xuat(int C[], int nC);

int main(){
	int A[MAX],B[MAX],C[2*MAX],nA,nB,nC;
	nhap(A,nA);
	nhap(B,nB);
	tronmangtangdan(A,B,C,nA,nB,nC);
	xuat(C,nC);
	return 0;	
}
void nhap(int A[], int &nA){
	cin>>nA;
	for (int i=0; i<nA; i++)
		cin>>A[i];
}
void hoandoi(int &a, int &b){
	int t = a;
		a = b;
		b = t;
}
void tronmangtangdan(int A[], int B[], int C[], int nA, int nB, int &nC){
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
	for (int i=0; i<nC-1; i++){
		for(int j=i+1; j<nC; j++){
			if(C[i]>C[j])
				hoandoi(C[i],C[j]);
		}
	}
}
void xuat(int C[], int nC){
	for (int i=0; i<nC; i++)
		cout<<C[i]<<" ";
}
