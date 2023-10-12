#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int x);
int timsoHTdautien(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = timsoHTdautien(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool lasoHT(int x){
	int t = 0;
	for (int i=1; i<x; i++){
		if(x%i==0)
			t = t + i;
	}
	if(t==x)
		return true;
	return false;
}
int timsoHTdautien(int A[], int n){
	for (int i=0; i<n; i++)
		if(lasoHT(A[i]))
			return A[i];
	return -1;
}
void xuat(int kq){
	cout<<kq;
}
