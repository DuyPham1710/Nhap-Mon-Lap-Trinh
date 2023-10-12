#include <iostream>
#define MAX 20
using namespace std;

void nhap(int A[][MAX], int &n);
int hoandoi(int &x, int &y);
void doi_mang_2chieu_sang_1chieu(int A[][MAX], int n, int B[], int &nB);
void sapxeptangdan(int B[], int nB);
void doi_mang_1chieu_sang_2chieu(int A[][MAX], int n, int B[]);
void xuat(int A[][MAX], int n);

int main(){
	int A[MAX][MAX],n;
	int B[100],nB;
	nhap(A,n);
	doi_mang_2chieu_sang_1chieu(A,n,B,nB);
	sapxeptangdan(B,nB);
	doi_mang_1chieu_sang_2chieu(A,n,B);
	xuat(A,n);
	return 0;
}
int hoandoi(int &x, int &y){
	int t = x;
		x = y;
		y = t;
}
void doi_mang_2chieu_sang_1chieu(int A[][MAX], int n, int B[], int &nB){
	nB=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			B[nB++] = A[i][j];
}
void sapxeptangdan(int B[], int nB){
	for (int i=0; i<nB-1; i++)
		for (int j=i+1; j<nB; j++)
			if(B[i]>B[j])
				hoandoi(B[i],B[j]);
}
void doi_mang_1chieu_sang_2chieu(int A[][MAX], int n, int B[]){
	int x=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			A[i][j] = B[x++];
}
void nhap(int A[][MAX], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
void xuat(int A[][MAX], int n){
	cout<<endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
