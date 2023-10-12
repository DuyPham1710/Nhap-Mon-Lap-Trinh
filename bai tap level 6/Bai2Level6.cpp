#include <iostream>
using namespace std;

void nhap(double A[], int &n);
double tinhtong297(double A[], int n);
void xuat(double kq);

int main(){
	double A[1000];
	int n;
	nhap(A,n);
	double kq = tinhtong297(A,n);
	xuat(kq);
	return 0;
}
void nhap(double A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
double tinhtong297(double A[], int n){
	double sum = 0;
	for(int i=0; i<n; i++)
		sum = sum + A[i];
	return sum;
}
void xuat(double kq){
	cout<<kq;
}
