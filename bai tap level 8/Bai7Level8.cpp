#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int timsoamMax(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = timsoamMax(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int timsoamMax(int A[], int n){
	int max = 0;
	for (int i=0; i<n; i++){
		if(A[i]<0){
			max = A[i];
			for (int j=i+1; j<n; j++)
				if(A[j]<0 && A[j]>max)
					max = A[j]; 
			break;
		}
	}
	return max;
}
void xuat(int kq){
	cout<<kq;
}
