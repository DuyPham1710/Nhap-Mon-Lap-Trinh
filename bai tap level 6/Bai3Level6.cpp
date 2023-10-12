#include <iostream>
using namespace std;

void nhap(int A[], int &n);
float trungbinhcong297(int A[], int n);
void xuat(float kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	float kq = trungbinhcong297(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
float trungbinhcong297(int A[], int n){
	int t=0;
	for (int i=0; i<n; i++)
		t = t + A[i];
	float avg = float(t)/n;		
		return avg;
}
void xuat(float kq){
	cout<<kq;
}
