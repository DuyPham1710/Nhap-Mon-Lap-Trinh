#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int timgiatrichanMin(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = timgiatrichanMin(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
int timgiatrichanMin(int A[], int n){
	int min = -1;
	for (int i=0; i<n; i++){
		if(A[i]%2==0){
			min = A[i];
			for (int j=i+1; j<n; j++)
				if(A[j]%2==0 && A[j]<min)
					min = A[j];
			break;
		}
	}
	return min;
}
void xuat(int kq){
	cout<<kq;
}
