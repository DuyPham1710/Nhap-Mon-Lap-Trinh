#include <iostream>
using namespace std;
void nhap(int A[], int &n);
int TBC(int A[], int n);
int main(){
	int A[100],n;
	nhap(A,n);
	int kq = TBC(A,n);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int TBC(int A[], int n){
	double dem = 0;
	double t = 0;
	double kq = 0;
	for (int i=0; i<n; i++){
		if(A[i]%5==0){
			t += A[i];
			dem++;
		}
	}
	if(dem>=1){
		kq = (int)t/dem;
		return kq;
	}
	else
		return kq;
}
