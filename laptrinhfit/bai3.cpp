#include <iostream>
#define MAX 10000
using namespace std;

void nhap(int A[], int &n);
int tichMax(int A[], int n, int B[], int &nB);
void xuat(int kq);
int main(){
	int A[MAX],n,B[MAX],nB;
	nhap(A,n);
	int kq = tichMax(A,n,B,nB);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int tichMax(int A[], int n, int B[], int &nB){
	nB = 0;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(A[i]!=A[j])
				B[nB++] = A[i]*A[j];
		}
	}
	int max = B[0];
	for (int i=1; i<nB; i++)
		if(B[i]>max)
			max = B[i];
	return max;
}
void xuat(int kq){
	cout<<kq;
}
