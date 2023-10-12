#include <iostream>
#define MAX 10000
using namespace std;
void nhap(int A[], int &n);
int vitrithoaman(int A[], int n);
void xuat(int kq);

int main(){
	int A[MAX],n;
	nhap(A,n);
	int kq = vitrithoaman(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int vitrithoaman(int A[], int n){
	for(int i=0; i<n; i++){
		int t1 = 0;
		int t2 = 0;
		for (int j=0; j<=i; j++)
			t1 += A[j];
		for (int x=i+1; x<n; x++)
			t2 += A[x];
		if(t1==t2)
			return i;
	}
	return -1;
}
void xuat(int kq){
	cout<<kq;
}
