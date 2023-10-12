#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
int TBCmin(int A[][MAX], int m, int n);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	int kq = TBCmin(A,m,n);
	cout<<kq;
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
int TBCmin(int A[][MAX], int m, int n){
	int B[MAX],nB=0;
	for(int i=0; i<m; i++){
		int min = A[i][0];
		for (int j=1; j<n; j++)
			if(A[i][j]<min)
				min = A[i][j];
		B[nB++] = min;
	}
	double t = 0,kq = 0;
	for (int i=0; i<nB; i++){
		t += B[i];
	}
    kq = t/nB;
	kq = round(kq);
	return kq;
}
