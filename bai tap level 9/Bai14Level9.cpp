#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &n);
void xoa1phantu(int A[], int &n, int k);
void xoa_phan_tu_trung_nhau(int A[], int &n);
void xuat(int A[], int n);

int main(){
	int A[MAX],n;
	nhap(A,n);
	xoa_phan_tu_trung_nhau(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void xoa1phantu(int A[], int &n, int k){
	for (int i=k; i<n-1; i++)
		A[i] = A[i+1];
	n--;
}
void xoa_phan_tu_trung_nhau(int A[], int &n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(A[i]==A[j]){
				xoa1phantu(A,n,j);
				i--;
			}
		}
	}
}
void xuat(int A[], int n){
	cout<<endl;
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
