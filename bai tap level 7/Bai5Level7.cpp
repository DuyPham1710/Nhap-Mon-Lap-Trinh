#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int x);
int demsoNT(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = demsoNT(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laNT(int x){
	int temp = 0;
	for (int i=1; i<=x; i++){
		if(x%i==0)
			temp++;
	}
	if(temp==2)
		return true;
	return false;
}
int demsoNT(int A[], int n){
	int dem = 0;
	for (int i=0; i<n; i++)
		if(laNT(A[i]))
			dem++;
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
