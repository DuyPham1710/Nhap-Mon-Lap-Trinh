#include <iostream>
#define MAX 10000
using namespace std;

void nhap(int A[], int &n);
int soNhoNhi(int A[], int n);
void xuat(int kq);

int main(){
	int A[MAX],n;
	nhap(A,n);
	int kq = soNhoNhi(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int soNhoNhi(int A[], int n){
	int max = A[0];
	int max2 = -1;
	for (int i=1; i<n; i++){
		if(A[i]>max){
			max2 = max;
			max = A[i];
		}
		if(max2<A[i] && A[i]<max)
			max2 = A[i];
	}
	return max2;
}
void xuat(int kq){
	cout<<kq;
}
