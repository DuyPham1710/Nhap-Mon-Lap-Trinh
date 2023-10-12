#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool kiemtraCSC(int A[], int n);
void xuat(bool kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	bool kq = kiemtraCSC(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtraCSC(int A[], int n){
	int x = A[1] - A[0];
	for (int i=2; i<n; i++)
		if(A[i] - A[i-1]!=x)
			return false;
	return true;
}
void xuat(bool kq){
	if(kq)
		cout<<"co lap thanh 1 day CSC"<<endl;
	else
		cout<<"khong lap thanh 1 day CSC"<<endl;
}
