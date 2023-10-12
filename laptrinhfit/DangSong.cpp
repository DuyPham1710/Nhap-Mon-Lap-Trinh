#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int DangSong(int A[], int n);

int main(){
	int A[50],n;
	nhap(A,n);
	int kq = DangSong(A,n);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int DangSong(int A[], int n){
	for (int i=1; i<n-1; i++)
		if(((A[i-1]<A[i] && A[i]>A[i+1]) || (A[i-1]>A[i] && A[i]<A[i+1]))==false)
			return i;
	return -1;
			
}
