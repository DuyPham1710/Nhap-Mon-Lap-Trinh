#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
int hoandoi(int &a, int &b);
void duongcheochinhtangdan(int A[][MAX], int m, int n);
void xuat(int A[][MAX], int m, int n);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	duongcheochinhtangdan(A,m,n);
	xuat(A,m,n);
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
int hoandoi(int &a, int &b){
	int t = a;
		a = b;
		b = t;
}
void duongcheochinhtangdan(int A[][MAX], int m, int n){
	for (int i=0; i<m; i++)
		for(int j=i+1; j<m; j++)
			if(A[i][i]>A[j][j])
				hoandoi(A[i][i],A[j][j]);
}
void xuat(int A[][MAX], int m, int n){
	cout<<endl;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
