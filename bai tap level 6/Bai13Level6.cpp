#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x);
int vitricuoicungcuax(int A[], int n, int x);
void xuat(int kq);

int main(){
	int A[1000],n,x;
	nhap(A,n,x);
	int kq = vitricuoicungcuax(A,n,x);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int vitricuoicungcuax(int A[], int n, int x){
	for (int i=n-1; i>=0; i--){
		if(A[i]==x)	
			return i;
	}
	return -1;
}
void xuat(int kq){
	cout<<kq;
}
