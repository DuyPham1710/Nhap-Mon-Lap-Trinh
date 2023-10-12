#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
int tinhtong297(int A[][MAX], int m, int n);
void xuat(int kq);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	int kq = tinhtong297(A,m,n);
	xuat(kq);
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
int tinhtong297(int A[][MAX], int m, int n){
	int t = 0;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			t = t + A[i][j];
	return t;
}
void xuat(int kq){
	cout<<kq;
}
