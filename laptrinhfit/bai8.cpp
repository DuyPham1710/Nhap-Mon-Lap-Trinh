// 10/50
#include <iostream>
#include <math.h>
#define MAX 10000
using namespace std;

void nhap(int A[], int &n, int &x);
int timMin(int A[], int n);
int vitriganXnhat(int A[], int n, int x, int B[]);
void xuat(int kq);

int main(){
	int A[MAX],n,x,B[MAX];
	nhap(A,n,x);
	int kq = vitriganXnhat(A,n,x,B);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int timMin(int A[], int n){
	int min = A[0];
	for (int i=1; i<n; i++)
		if(A[i]<min)
			min = A[i];
	return min;
}
int vitriganXnhat(int A[], int n, int x, int B[]){
	int vitri = 0;
	int kcmin = 0;
	for (int i=0; i<n; i++){
		kcmin = abs(x-A[i]);
		B[i] = kcmin;
	}
	int min = timMin(B,n);
	for (int i=0; i<n; i++){
		if(B[i]==min){
			vitri = i;
			return vitri;
		}
	}
}
void xuat(int kq){
	cout<<kq;
}
