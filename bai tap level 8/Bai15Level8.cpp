#include <iostream>
using namespace std;

void nhap(double A[], int &n, double &x);
double timsoamcuoicung(double A[], int n, double x);
void xuat(double kq);

int main(){
	double A[1000],x;
	int n;
	nhap(A,n,x);
	double kq = timsoamcuoicung(A,n,x);
	xuat(kq);
	return 0;	
}
void nhap(double A[], int &n, double &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
double timsoamcuoicung(double A[], int n, double x){
	for (int i=n-1; i>=0; i--)
		if(A[i]<0 && A[i]>x)
			return A[i];
	return 0;
}
void xuat(double kq){
	cout<<kq;
}
