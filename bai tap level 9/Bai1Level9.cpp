#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &nA);
void taora2mang(int A[], int nA, int B[], int &nB, int C[], int &nC);
void xuat(int A[], int nA);

int main(){
	int A[MAX],nA,B[MAX],nB,C[MAX],nC;
	nhap(A,nA);
	taora2mang(A,nA,B,nB,C,nC);
	xuat(B,nB);
	xuat(C,nC);
	return 0;
}
void nhap(int A[], int &nA){
	cin>>nA;
	for (int i=0; i<nA; i++)
		cin>>A[i];
}
void taora2mang(int A[], int nA, int B[], int &nB, int C[], int &nC){
	nB = 0;
	nC = 0;
	for (int i=0; i<nA; i++){
		if(A[i]>=0)
			B[nB++] = A[i];
		else
			C[nC++] = A[i];
	}
}
void xuat(int A[], int nA){
	for (int i=0; i<nA; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
