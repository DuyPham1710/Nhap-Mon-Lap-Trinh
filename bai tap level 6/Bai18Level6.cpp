#include <iostream>
using namespace std;

void nhap(int A[], int &n);
void mangdaonguoc(int A[], int n);
void hoandoi(int &x, int &y);
void xuat(int A[], int n);

int main(){
	int A[1000],n;
	nhap(A,n);
	mangdaonguoc(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void mangdaonguoc(int A[], int n){
	int x = 0;
	int y = n-1;
	while(x<y){
		hoandoi(A[x],A[y]);
		x++;
		y--;
	}
}
void hoandoi(int &x, int &y){
	int temp = x;
		x = y;
		y = temp;
}
void xuat(int A[], int n){
	for (int i=0; i<n; i++)
		cout<<A[i]<<"  ";
}
