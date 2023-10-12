#include <iostream>
#include <math.h>
using namespace std;

void nhap(int A[], int &n);
bool lasoCP(int x);
int tongsoCP(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = tongsoCP(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool lasoCP(int x){
	if(sqrt(x)==int(sqrt(x)))
		return true;
	return false;
}
int tongsoCP(int A[], int n){
	int t = 0;
	for(int i=0; i<n; i++)
		if(lasoCP(A[i]))
			t = t + A[i];
	return t;
}
void xuat(int kq){
	cout<<kq;
}
