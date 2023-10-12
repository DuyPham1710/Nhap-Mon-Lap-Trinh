#include <iostream>
#define MAX 100
using namespace std;
void nhap(long long A[][MAX], int &m, int &n);
long long MaxDongGiua(long long A[][MAX], int m, int n);
int main(){
	long long A[MAX][MAX];
	int m,n;
	nhap(A,m,n);
	long long kq = MaxDongGiua(A,m,n);
	cout<<kq;
	return 0;
}
void nhap(long long A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
long long MaxDongGiua(long long A[][MAX], int m, int n){
	long long max = A[m/2][0];
	for (int j=1; j<n; j++){
		if(A[m/2][j]>max)
			max = A[m/2][j];
	}
	return max;
		
}
