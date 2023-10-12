#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &nA);
int solanxuathien(int A[], int nA, int x);
void liet_Ke_tan_Suat_Xuat_Hien(int A[], int nA, int B[], int &nB, int C[]);
void xuat(int B[], int C[], int n);

int main(){
	int A[MAX],nA,B[MAX],nB,C[MAX];
	nhap(A,nA);
	liet_Ke_tan_Suat_Xuat_Hien(A,nA,B,nB,C);
	xuat(B,C,nB);
	return 0;
}
void nhap(int A[], int &nA){
	cin>>nA;
	for (int i=0; i<nA; i++)
		cin>>A[i];
}
int solanxuathien(int A[], int nA, int x){
	int dem = 0;
	for (int i=0; i<nA; i++)
		if(A[i]==x)
			dem++;
	return dem;
}
void liet_Ke_tan_Suat_Xuat_Hien(int A[], int nA, int B[], int &nB, int C[]){
	nB = 0;
	for (int i=0; i<nA; i++)
		if(solanxuathien(B,nB,A[i])==0)
			B[nB++] = A[i];
	for (int i=0; i<nB; i++)
		C[i] = solanxuathien(A,nA,B[i]);
}
void xuat(int B[], int C[], int n){
	for (int i=0; i<n; i++){
		cout<<B[i]<<" xuat hien "<<C[i]<<" lan"<<endl;
	}
}
