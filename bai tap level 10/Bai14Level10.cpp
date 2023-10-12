#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
int TimTatCaViTriMax(int A[][MAX], int m, int n);
void xuat(int x, int y);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	TimTatCaViTriMax(A,m,n);
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
int TimTatCaViTriMax(int A[][MAX], int m, int n){
	int max = A[0][0];
	for (int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(A[i][j]>max)
				max = A[i][j];	
	for (int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(A[i][j]==max)
				xuat(i,j);	
}
void xuat(int x, int y){
	cout<<x<<y<<" ";
}
