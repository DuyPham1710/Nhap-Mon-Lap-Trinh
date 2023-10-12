#include <iostream>
#define MAX 1000
using namespace std;

void nhap(float A[], int &m);
bool tim(float A[], int m, float x);
float kiemtra(float A[], int m, float B[], int n);
void xuat(float kq);

int main(){
	float A[MAX],B[MAX];
	int m,n;
	nhap(A,m);
	nhap(B,n);
	kiemtra(A,m,B,n);
	return 0;
}
void nhap(float A[], int &m){
	cin>>m;
	for (int i=0; i<m; i++)
		cin>>A[i];
}
bool tim(float A[], int m, float x){
	for (int i=0; i<m; i++)
		if(A[i]==x)
			return true;
	return false;
}
float kiemtra(float A[], int m, float B[], int n){
	for (int i=0; i<m; i++)
		if(tim(B,n,A[i])==false)
			xuat(A[i]);
}
void xuat(float kq){
	cout<<kq<<" ";
}
