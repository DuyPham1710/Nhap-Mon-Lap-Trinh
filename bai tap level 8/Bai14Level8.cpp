#include <iostream>
using namespace std;

void nhap(double A[], int &n);
double timmin(double A[], int n);
double timmax(double A[], int n);
double timdoan(double A[], int n, int &a, int &b);
void xuat(int a, int b);

int main(){
	double A[1000];
	int n,a,b;
	nhap(A,n);
	timdoan(A,n,a,b);
	xuat(a,b);
	return 0;
}
void nhap(double A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
double timmin(double A[], int n){
	double min = A[0];
	for (int i=1; i<n; i++)
		if(A[i]<min)
			min = A[i];
	return min;
}
double timmax(double A[], int n){
	double max = A[0];
	for (int i=1; i<n; i++)
		if(A[i]>max)
			max = A[i];
	return max;
}
double timdoan(double A[], int n, int &a, int &b){
	double max = timmax(A,n);
	double min = timmin(A,n);
	if(min<0)
		if(min==int(min))
			a = min;
		else
			a = int(min) - 1;
	else
		a = (int)min;
	if(max<0)
		if(max==(int)max)
			b = max;
		else
			b = (int)max;
	else
		if(max==int(max))
			b = max;
		else
			b = (int)max + 1;
}
void xuat(int a, int b){
	cout<<"["<<a<<" ; "<<b<<"]"<<endl;
}
