#include <iostream>
#define MAX 50
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
int kiemtra(int A[][MAX], int x, int n);
int TangNghiemNgat(int A[][MAX], int m, int n);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	int kq = TangNghiemNgat(A,m,n);
	cout<<kq;
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}

int kiemtra(int A[][MAX], int x, int n){
	int tam=0;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(A[x][i]>=A[x][j])
				tam = 1;
				break;
		}
	}
	return tam;
}
int TangNghiemNgat(int A[][MAX], int m, int n){
	int dem = 0;
	for (int i=0; i<m; i++)
		if(kiemtra(A,i,n)==0)
			dem++;
	return dem;
}
