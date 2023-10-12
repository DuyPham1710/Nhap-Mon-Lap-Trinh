#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int vitriMax(int A[], int n);
int vitriMin(int A[], int n);
void doichoMaxMin(int A[], int n);
int hoandoi(int &x, int &y);
void xuat(int A[], int n);

int main(){
	int A[1000],n;
	nhap(A,n);
	doichoMaxMin(A,n);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int vitriMax(int A[], int n){
	int vitrimax = 0;
	int max = A[0];
	for (int i=1; i<n; i++){
		if(A[i]>max){
			max = A[i];
			vitrimax = i;
		}
	}
	return vitrimax;
}
int vitriMin(int A[], int n){
	int vitrimin = 0;
	int min = A[0];
	for (int i=1; i<n; i++){
		if(A[i]<min){
			min = A[i];
			vitrimin = i;
		}
	}
	return vitrimin;
}
void doichoMaxMin(int A[], int n){
	int max = vitriMax(A,n);
	int min = vitriMin(A,n);
	hoandoi(A[max],A[min]);
}
int hoandoi(int &x, int &y){
	int t=x;
		x=y;
		y=t;
}
void xuat(int A[], int n){
	for (int i=0; i<n; i++)
		cout<<A[i]<<"  ";
}
