#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x, int &i);
void themvaomang(int A[], int &n, int x, int i);
void xoa_vi_tri_i(int A[], int &n, int i);
void xuat(int A[], int n);

int main(){
	int A[1000],n,x,i;
	nhap(A,n,x,i); 
	themvaomang(A,n,x,i);
	xuat(A,n);
	xoa_vi_tri_i(A,n,i);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n, int &x, int &i){
	cin>>n;
	for (int j=0; j<n; j++)
		cin>>A[j];
	cin>>x>>i;
}
void themvaomang(int A[], int &n, int x, int i){
	for (int j=n-1; j>i; j--)
		A[j+1] = A[j];
	A[i+1] = x;
	n++;
}
void xoa_vi_tri_i(int A[], int &n, int i){
	for (int j=i; j<n-1; j++)
		A[j] = A[j+1];
	n--;
}
void xuat(int A[], int n){
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
