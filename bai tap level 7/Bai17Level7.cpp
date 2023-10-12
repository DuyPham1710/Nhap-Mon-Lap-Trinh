#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laHH(int x);
int kiemtrasoHH(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = kiemtrasoHH(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laHH(int x){
	int t = 0;
	for (int i=1; i<x; i++){
		if(x%i==0)
			t = t + i;
	}
	if(t==x)
		return true;
	return false;
}
int kiemtrasoHH(int A[], int n){
	for (int i=0; i<n; i++)
		if(laHH(A[i])==false)
			return 0;
	return 1;
}
void xuat(int kq){
	if(kq==0)
		cout<<"khong gom cac so HH"<<endl;
	else
		cout<<"co"<<endl;
}
