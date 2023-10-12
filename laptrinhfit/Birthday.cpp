#include <iostream>
#define MAX 100000
using namespace std;

void nhap(int A[], int B[], int &n);
int Birthday(int A[], int B[], int n);

int main(){
	int A[MAX],B[MAX],n;
	nhap(A,B,n);
	int kq = Birthday(A,B,n);
	cout<<kq;
	return 0;
}
void nhap(int A[], int B[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
	for (int i=0; i<n; i++)
		cin>>B[i];
}
int Birthday(int A[], int B[], int n){
	int min = B[0]/A[0];
	for(int i=0; i<n; i++)
		if(B[i]/A[i]<min)
			min = B[i]/A[i];
	return min;
}
