#include <iostream>
#define MAX 10000
using namespace std;

void nhap(int A[], int &n);
int timMax(int A[], int n);
int vitridau(int A[], int n);
int vitricuoi(int A[], int n);
int tinh(int A[], int n);
void xuat(int kq);

int main(){
	int A[MAX],n;
	nhap(A,n);
	int kq = tinh(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int timMax(int A[], int n){
	int max = A[0];
	for (int i=1; i<n; i++)
		if(A[i]>max)
			max = A[i];
	return max;
}
int vitridau(int A[], int n){
	int max = timMax(A,n);
	int vitridau = 0;
	for (int i=0; i<n; i++){
		if(A[i]==max){
			vitridau = i;
			break;
		}
	}
	return vitridau;
}
int vitricuoi(int A[], int n){
	int max = timMax(A,n);
	int vitricuoi = 0;
	for (int i=n-1; i>=0; i--){
		if(A[i]==max){
			vitricuoi = i;
			break;
		}
	}
	return vitricuoi;
	
}
int tinh(int A[], int n){
	int kq = 0;
	int vitri1 = vitridau(A,n);
	int vitri2 = vitricuoi(A,n);
		kq = vitri2 - vitri1;
	return kq;
}
void xuat(int kq){
	cout<<kq;
}
