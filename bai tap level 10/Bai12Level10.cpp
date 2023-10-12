#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
int tinhtongdong(int A[][MAX], int m, int n);
int tinhtongcot(int A[][MAX], int m, int n);
int tinhtongduongcheochinh(int A[][MAX], int n);
int tinhtongduongcheophu(int A[][MAX], int n);
void xuattongdong(int kq);
void xuattongcot(int kq);
void xuat(int kq);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	tinhtongdong(A,m,n);
	tinhtongcot(A,m,n);
	int kq1 = tinhtongduongcheochinh(A,n);
	int kq2 = tinhtongduongcheophu(A,n);
	xuat(kq1);
	xuat(kq2);
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n;j++)
			cin>>A[i][j];
}
int tinhtongdong(int A[][MAX], int m, int n){
	for (int i=0; i<m; i++){
		int t = 0;
		for (int j=0; j<n; j++)
			t = t + A[i][j];
		xuattongdong(t);
	}
}
int tinhtongcot(int A[][MAX], int m, int n){
	for(int j=0; j<n; j++){
		int tong = 0;
		for (int i=0; i<m; i++)
			tong += A[i][j];
		xuattongcot(tong);
	}
}
int tinhtongduongcheochinh(int A[][MAX], int n){
	int tong = 0;
	for(int i=0; i<n; i++)
		tong += A[i][i];
	return tong;
}
int tinhtongduongcheophu(int A[][MAX], int n){
	int tong = 0;
	for(int i=0; i<n; i++)
		tong += A[i][n-i-1];
	return tong;
}
void xuattongdong(int kq){
	cout<<kq<<endl;
}
void xuattongcot(int kq){
	cout<<kq<<endl;
}
void xuat(int kq){
	cout<<kq<<endl;
}
