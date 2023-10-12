#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int x);
int soNTmax(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = soNTmax(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laNT(int x){
	int dem = 0;
	for(int i=1; i<=x; i++){
		if(x%i==0)
			dem++;
	}
	if(dem==2)
		return true;
	return false;
}
int soNTmax(int A[], int n){
	int max = 0;
	for (int i=0; i<n; i++)
		if(laNT(A[i]) && A[i]>max)
			max = A[i];
	return max;
}
void xuat(int kq){
	cout<<kq;
}
