#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int MINMAX(int A[], int n);

int main(){
	int A[1000],n;
	nhap(A,n);
	MINMAX(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int MINMAX(int A[], int n){
	int max = A[0];
	for(int i=1; i<n; i++){
		if(A[i]>max)
			max = A[i];
	}
	int min = A[0];
	for(int i=1; i<n; i++)
		if(A[i]<min)
			min = A[i];
	cout<<max<<" "<<min;
}
