#include <iostream>
#define MAX 100
using namespace std;

void nhap(float A[][MAX], int &m, int &n);
int demsochantrenbien(float A[][MAX], int m, int n);
void xuat(int kq);

int main(){
	float A[MAX][MAX];
	int m,n;
	nhap(A,m,n);
	int kq = demsochantrenbien(A,m,n);
	xuat(kq);
	return 0;
}
void nhap(float A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
int demsochantrenbien(float A[][MAX], int m, int n){
	int dem = 0;
	for (int j=0; j<n; j++)
		if((int)A[0][j]%2==0)
			dem++;
	for (int i=1; i<m; i++)
		if((int)A[i][0]%2==0)
			dem++;
	for (int j=1; j<n; j++)
		if((int)A[m-1][j]%2==0)
			dem++;
	for (int i=1; i<m-1; i++)
		if((int)A[i][n-1]%2==0)
			dem++;
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
