#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int B[][MAX], int &m, int &n);
void tinhtong2matran(int A[][MAX], int B[][MAX], int C[][MAX], int m, int n);
void xuat(int A[][MAX], int m, int n);

int main(){
	int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX],m,n;
	nhap(A,B,m,n);
	tinhtong2matran(A,B,C,m,n);
	xuat(C,m,n);
	return 0;
}
void tinhtong2matran(int A[][MAX], int B[][MAX], int C[][MAX], int m, int n){
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			C[i][j] = A[i][j] + B[i][j];
}
void nhap(int A[][MAX], int B[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>B[i][j];
}
void xuat(int A[][MAX], int m, int n){
	cout<<endl;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
