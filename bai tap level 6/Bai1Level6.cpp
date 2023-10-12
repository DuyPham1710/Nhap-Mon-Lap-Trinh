#include <iostream>
using namespace std;

void nhap297(int A[], int &n);
void xuat297(int A[], int n);

int main(){
	int A[1000], n;
	nhap297(A,n);
	xuat297(A,n);
	return 0;
}
void nhap297(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
void xuat297(int A[], int n){
	for (int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
