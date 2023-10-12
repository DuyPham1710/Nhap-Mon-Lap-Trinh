#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int demsoam(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = demsoam(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
int demsoam(int A[], int n){
	int dem = 0;
	for (int i=0; i<n; i++)
		if(A[i]<0)
			dem++;
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
