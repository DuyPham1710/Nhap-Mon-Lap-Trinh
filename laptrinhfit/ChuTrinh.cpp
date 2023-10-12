#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[], int &n, int &k);
int ChuTrinh(int A[], int n, int k);

int main(){
	int A[MAX],n,k;
	nhap(A,n,k);
	ChuTrinh(A,n,k);
//	xuat(B,nB);
	return 0;
}
void nhap(int A[], int &n, int &k){
	cin>>n>>k;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int ChuTrinh(int A[], int n, int k){
	int B[MAX],nB=0;
	if(A[0]!=A[n-1])
		cout<<"-1";
	else{
		for (int i=k; i<n; i++){
			B[nB++] = A[i];
		}
		for(int i=1; i<=k; i++){
			B[nB++] = A[i];
		}
		for(int i=0; i<nB; i++)
			cout<<B[i]<<" ";
	}	
}
