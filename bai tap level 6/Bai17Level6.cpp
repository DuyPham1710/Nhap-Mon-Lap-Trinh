#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int timmaxtrongmang(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = timmaxtrongmang(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
int timmaxtrongmang(int A[], int n){
	int max = A[0];
	for (int i=1; i<n; i++)
		if(A[i]>max)
			max = A[i];
	return max;
}
void xuat(int kq){
	cout<<kq;
}
