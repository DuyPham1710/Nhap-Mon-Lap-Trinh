#include <iostream>
#include <math.h>
using namespace std;

void nhap(int A[], int &n);
bool lasoCP(int x);
int kiemtrasoCP(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = kiemtrasoCP(A,n);
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
int kiemtrasoCP(int A[], int n){
	for (int i=0; i<n; i++)
		if(lasoCP(A[i])==false)
			return 0;
	return 1;
}
void xuat(int kq){
	if(kq==0)
		cout<<"khong gom cac so chinh phuong"<<endl;
	else
		cout<<"co"<<endl;
}
