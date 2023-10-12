#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x);
bool laNT(int n);
int NTminLonhonX(int A[], int n, int x);

int main(){
	int A[50],n,x;
	nhap(A,n,x);
	int kq = NTminLonhonX(A,n,x);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laNT(int n){
	int dem = 0;
	for (int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return true;
	return false;
}
int NTminLonhonX(int A[], int n, int x){
	int B[50],nB = 0;
	for (int i=0; i<n; i++){
		if(laNT(A[i]) && A[i]>x)
			B[nB++] = A[i];
	}
	if(nB==0)
		return 0;
	else{
		int min = B[0];
		for(int i=1; i<nB; i++)
			if(B[i]<min)
				min = B[i];
		return min;
	}
}
