#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &nA);
void xoa1phantu(int A[], int &n, int k);
int solanxuathien(int A[], int n, int x);
void xoa_tan_suat_lon_hon_1(int A[], int nA, int B[], int &nB);
void xuat(int A[], int n);

int main(){
	int A[MAX],nA,B[MAX],nB;
	nhap(A,nA);
	xoa_tan_suat_lon_hon_1(A,nA,B,nB);
	xuat(B,nB);
	return 0;
}
void nhap(int A[], int &nA){
	cin>>nA;
	for (int i=0; i<nA; i++)
		cin>>A[i];
}
void xoa1phantu(int A[], int &n, int k){
	for (int i=k; i<n-1; i++)
		A[i] = A[i+1];
	n--;
}
int solanxuathien(int A[], int n, int x){
	int dem = 0;
	for (int i=0; i<n; i++)
		if(A[i]==x)
			dem++;
	return dem;
}
void xoa_tan_suat_lon_hon_1(int A[], int nA, int B[], int &nB){
	nB = 0;
	for (int i=0; i<nA; i++){
		if(solanxuathien(B,nB,A[i])==0)
			B[nB++] = A[i];
	}
	for (int i=0; i<nB; i++){
		if(solanxuathien(A,nA,B[i])>1){
			xoa1phantu(B,nB,i);
			i--;
		}
	}
}
void xuat(int A[], int n){
	cout<<endl;
	for (int i=0; i<n;i++)
		cout<<A[i]<<" ";
}
