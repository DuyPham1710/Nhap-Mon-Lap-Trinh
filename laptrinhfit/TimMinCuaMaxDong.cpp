#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
int MAXnhonhat(int A[][MAX], int m, int n);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	int kq = MAXnhonhat(A,m,n);
	cout<<kq;
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
int MAXnhonhat(int A[][MAX], int m, int n){
	int B[MAX], nB = 0;
	for (int i=0; i<m; i++){
		int max = A[i][0];
		for(int j=1; j<n; j++)
			if(A[i][j]>max)
				max = A[i][j];
		B[nB++] = max;
	}
	int min = B[0];
	for(int i=1; i<nB; i++)
		if(B[i]<min)
			min = B[i];
	return min;
}
