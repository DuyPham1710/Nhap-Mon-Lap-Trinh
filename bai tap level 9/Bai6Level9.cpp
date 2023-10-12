#include <iostream>
#define MAX 1000
using namespace std;

void nhap(float A[], int &n);
float tongcuctri(float A[], int n);
void xuat(float kq);

int main(){
	float A[MAX];
	int n;
	nhap(A,n);
	float kq = tongcuctri(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
float tongcuctri(float A[], int n){
	float t = 0;
	for (int i=0; i<n-2; i++)
		if(A[i]<A[i+1] && A[i+1]>A[i+2] || A[i]>A[i+1] && A[i+1]<A[i+2])
			t += A[i+1];
	return t;
}
void xuat(float kq){
	cout<<kq;
}
