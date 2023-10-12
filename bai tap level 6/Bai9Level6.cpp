#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x);
int tinhtong297(int A[], int n, int x);
void xuat(int kq);

int main(){
	int A[1000],n,x;
	nhap(A,n,x);
	int kq = tinhtong297(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int tinhtong297(int A[], int n, int x){
	int t = 0;
	for (int i=0; i<n; i++){
		if(A[i]>x)
			t +=A[i];
	}
	return t;
}
void xuat(int kq){
	cout<<kq;
}
