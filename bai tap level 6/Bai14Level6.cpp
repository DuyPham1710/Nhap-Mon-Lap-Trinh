#include <iostream>
using namespace std;

void nhap(double A[], int &n);
double timsoamdautien(double A[], int n);
void xuat(double kq);

int main(){
	double A[1000];
	int n;
	nhap(A,n);
	double kq = timsoamdautien(A,n);
	xuat(kq);
	return 0;
}
void nhap(double A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
double timsoamdautien(double A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]<0)
			return A[i];
	return 1;
}
void xuat(double kq){
	cout<<kq;
}
