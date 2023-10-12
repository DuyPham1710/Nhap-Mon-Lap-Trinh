#include <iostream>
#define MAX 100
using namespace std;

void nhap(long A[][MAX], long &m, long &n, long &k);
long maxsaukhiloaidongK(long A[][MAX], long &m, long n, long k);

int main(){
	long A[MAX][MAX],m,n,k;
	nhap(A,m,n,k);
	long kq = maxsaukhiloaidongK(A,m,n,k);
	cout<<kq;
	return 0;
}
void nhap(long A[][MAX], long &m, long &n, long &k){
	cin>>m>>n>>k;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}
long maxsaukhiloaidongK(long A[][MAX], long &m, long n, long k){
	for (int i=k; i<m-1; i++)
		for(int j=0; j<n; j++){
			A[i][j] = A[i+1][j];
		}
	m--;
	long max = A[0][0];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(A[i][j]>max)
				max = A[i][j];
		}
	}
	return max;
}
