#include <iostream>
#define MAX 1000
using namespace std;

void nhap(float A[], int &n);
float timmax(float A[], int n);
int demGTLN(float A[], int n);
void xuat(int kq);

int main(){
	float A[MAX];
	int n;
	nhap(A,n);
	int kq = demGTLN(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
float timmax(float A[], int n){
	float max = A[0];
	for (int i=1; i<n; i++)
		if(A[i]>max)
			max = A[i];
	return max;
}
int demGTLN(float A[], int n){
	float max = timmax(A,n);
	int dem = 0;
	for(int i=0; i<n; i++)
		if(A[i]==max)
			dem++;
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
