#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &n);
void xuat(int A[][MAX], int n);
void chuyenvi(int A[][MAX], int B[][MAX], int n);
int Tongduongcheochinh(int A[][MAX], int n);
int phantunhonhat(int A[][MAX], int n);
int tongcacsotrenbien(int A[][MAX], int n);

int main(){
	int A[MAX][MAX],B[MAX][MAX],n;
	nhap(A,n);
	xuat(A,n);
	chuyenvi(A,B,n);
	xuat(B,n);
	int kq = Tongduongcheochinh(B,n);
	cout<<kq<<endl;
	int min = phantunhonhat(B,n);
	cout<<min<<endl;
	int tong = tongcacsotrenbien(B,n);
	cout<<tong;
	return 0;
}
int tongcacsotrenbien(int A[][MAX], int n){
	int t = 0;
	for(int i=0; i<n; i++)
		t += A[0][i];
	for(int i=1; i<n; i++)
		t += A[i][0];
	for(int i=1; i<n; i++)
		t += A[n-1][i];
	for(int i=1; i<n-1; i++)
		t += A[i][n-1];
	return t;
}
int phantunhonhat(int A[][MAX], int n){
	int min = A[0][n-1];
	for(int i=0; i<n; i++)
		if(A[i][n-i-1]<min)
			min = A[i][n-i-1];
	return min;
}
int Tongduongcheochinh(int A[][MAX], int n){
	int t = 0;
	for(int i=0; i<n; i++)
		t += A[i][i];
	return t;
}
void chuyenvi(int A[][MAX], int B[][MAX], int n){
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			B[j][i] = A[i][j];
}
void nhap(int A[][MAX], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}
void xuat(int A[][MAX], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
