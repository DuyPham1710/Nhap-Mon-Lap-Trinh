#include <iostream>
#define MAX 10000
using namespace std;

void nhap(int A[], int &n);
int demMangX(int A[], int n);
void xuat(int kq);

int main(){
	int A[MAX],n;
	nhap(A,n);
	int kq = demMangX(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int demMangX(int A[], int n){
	int dem = 0;
	for (int i=0; i<n-1; i++){
		if(A[i]==A[i+1] && A[i+1]!= A[i+2]){
			dem++;			
		}
	}
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
