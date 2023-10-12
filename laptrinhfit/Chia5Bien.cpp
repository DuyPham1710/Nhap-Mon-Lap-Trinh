#include <iostream>
#define MAX 100
using namespace std;

void nhap(long long A[][MAX], int &m, int &n);
long long TBCsochiahet5(long long A[][MAX], int m, int n);

int main(){
	long long A[MAX][MAX];
	int m,n;
	nhap(A,m,n);
	long long kq = TBCsochiahet5(A,m,n);
	cout<<kq;
	return 0;
}
void nhap(long long A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}
long long TBCsochiahet5(long long A[][MAX], int m, int n){
	long long t = 0;
	int dem = 0;
	long long kq = 0;
	for (int j=0; j<n; j++){
		if(A[0][j]%5==0){
			t = t + A[0][j];
			dem++;
		}
	}
	for(int i=1; i<m; i++){
		if(A[i][0]%5==0){
			t = t + A[i][0];
			dem++;
		}
	}
	for(int j=1; j<n; j++){
		if(A[m-1][j]%5==0){
			t = t + A[m-1][j];
			dem++;
		}
	}
	for(int i=1; i<m-1; i++){
		if(A[i][n-1]%5==0){
			t = t + A[i][n-1];
			dem++;
		}
	}
	if(dem!=0){
		kq = t/dem;
		return kq;
	}
	else
		return kq;
}


