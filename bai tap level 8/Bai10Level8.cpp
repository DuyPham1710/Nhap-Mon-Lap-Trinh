#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool lasoHT(int x);
int soHTmin(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = soHTmin(A,n);
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
	for(int i=1; i<x; i++){
		if(x%i==0)
			t = t + i;
	}
	if(t==x)
		return true;
	return false;
}
int soHTmin(int A[], int n){
	int min = 0;
	for (int i=0; i<n; i++){
		if(lasoHT(A[i])){
			min = A[i];
			for (int j=i+1; j<n; j++)
				if(lasoHT(A[j]) && A[j]<min)
					min = A[j];
			break;
		}
	}
	return min;
}
void xuat(int kq){
	cout<<kq;
}
