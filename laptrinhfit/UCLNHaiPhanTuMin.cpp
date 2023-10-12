#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int UCLN2soMin(int A[], int n);

int main(){
	int A[10000],n;
	nhap(A,n);
	int kq = UCLN2soMin(A,n);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int UCLN2soMin(int A[], int n){
	int min = A[0];
	int min2 = 0;
	for(int i=1; i<n; i++){
		if(A[i]<min){
			min2 = min;
			min = A[i];
		}
		if(A[i]>min && A[i]<min2){
			min2 = A[i];
		}
	}
	if(min==0)
		return min2;
	if(min2==0)
		return min;
	while(min!=min2){
		if(min>min2)
			min = min - min2;
		else
			min2 = min2 - min;
	}
	return min;
}
