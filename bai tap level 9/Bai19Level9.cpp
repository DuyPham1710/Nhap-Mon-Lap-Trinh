#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
int timsolonT2(int A[], int n);
void xuat(int kq);

int main(){
	int A[MAX],n;
	nhap(A,n);
	int kq = timsolonT2(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
int timsolonT2(int A[], int n){
	int max = A[0];
	int max2 = -10e8;
	for(int i=1; i<n; i++){
		if(A[i]>max){
			max2 = max;
			max = A[i];
		}
		if(A[i]>max2 && A[i]<max)
			max2 = A[i];
	}
	return max2;
}
void xuat(int kq){
	cout<<kq;
}
