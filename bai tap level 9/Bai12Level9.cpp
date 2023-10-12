#include <iostream>
#define MAX 1000
using namespace std;

void nhap(float A[], int &n);
float timMax(float A[], int n);
void xoa1phantuMax(float A[], int &n, int k);
void XoaMax(float A[], int &n);
void xuat(float A[], int n);

int main(){
	float A[MAX];
	int n;
	nhap(A,n);
	XoaMax(A,n);
	xuat(A,n);
	return 0;
}
void nhap(float A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
float timMax(float A[], int n){
	float max = A[0];
	for (int i=1; i<n; i++)
		if(A[i]>max)
			max = A[i];
	return max;
}
void xoa1phantuMax(float A[], int &n, int k){
	for (int i=k; i<n-1; i++)
		A[i] = A[i+1];
	n--;
}
void XoaMax(float A[], int &n){         
	float max = timMax(A,n);
	for (int i=0; i<n; i++){
		if(A[i]==max){
			xoa1phantuMax(A,n,i);
			i--;
		}
	}
}
void xuat(float A[], int n){
	cout<<endl;
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
