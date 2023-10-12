#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int vitriMIN(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = vitriMIN(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int vitriMIN(int A[], int n){
	int min = A[0];
	int vitri = 0;
	for(int i=1; i<n; i++){
		if(A[i] < min){
			min = A[i];
			vitri = i;
		}
	}
	return vitri;
}
void xuat(int kq){
	cout<<kq;
}
