#include <iostream>
#include <math.h>
#define MAX 200
using namespace std;

bool laNT(long long n);
void xuat(long long A[], int n);

int main(){
	long long A[MAX];
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	xuat(A,n);
	cout<<endl;
	long long B[MAX];
	int nB=0;
	for(int i=0; i<n; i++){
		if(laNT(A[i]))
			B[nB++] = A[i];
	}
	if(nB==0){
		cout<<"KHONG CO"<<endl;
	}
	else{
		xuat(B,nB);
		cout<<endl;
	}
	long long t = 0;
	for(int i=0; i<nB; i++){
		t += B[i];
	}
	cout<<t<<endl;
	long long min=10e10, min1=A[0];
	for(int i=0; i<n; i++){
		if(abs(A[i])<min && A[i]!=0){
			min1 = A[i];
			min = abs(A[i]);
		}
	}
	if(min==10e10){
		cout<<"KHONG CO"<<endl;
	}
	else{
		cout<<min1<<endl;
	}
	int tam = 0;
	for(int i=1; i<n; i++){
		if(A[i-1]>A[i]){
			tam = 1;
		}
	}
	if(tam==1){
		cout<<"KHONG TANG"<<endl;
	}
	else{
		cout<<"TANG"<<endl;
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(A[j]>A[i]){
				int t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
		}
	}
	xuat(A,n);
}
bool laNT(long long n){
	int dem = 0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			dem++;
	}
	if(dem==2)
		return true;
	return false;
}
void xuat(long long A[], int n){
	for(int i=0; i<n; i++)
		cout<<A[i]<<" ";
}
