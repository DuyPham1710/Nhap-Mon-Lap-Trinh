#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int &n);
void nhap_mang_luon_tang_giam(int A[], int n);
void sapxep(int A[], int n);
void xuat(int A[], int n);

int main(){
	int A[MAX],n;
	nhap(n);
	nhap_mang_luon_tang_giam(A,n);
	return 0;	
}
void nhap(int &n){
	cin>>n;
}
void nhap_mang_luon_tang_giam(int A[], int n){
	int nA = 0;
	for (int i=0; i<n; i++){
		cin>>A[i];
		nA++;
		if(nA>1){
			sapxep(A,nA);
			xuat(A,nA);
		}
	}
}
void sapxep(int A[], int n){
	int t = 0;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(A[i]>A[j]){
				t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
}
void xuat(int A[], int n){
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
