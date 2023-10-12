#include <iostream>
#define MAX 1000
using namespace std;

void nhap(float A[], int &n);
void LietKeLanCan(float A[], int n);
void xuat(float kq);

int main(){
	float A[MAX];
	int n;
	nhap(A,n);
	LietKeLanCan(A,n);
	return 0;
}
void nhap(float A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void LietKeLanCan(float A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]*A[i-1]<0 || A[i]*A[i+1]<0)
			xuat(A[i]);
}
void xuat(float kq){
	cout<<kq<<" ";
}
