#include <iostream>
using namespace std;

void nhap(float A[], int &n);
bool kiemtrasoduong(float A[], int n);
void xuat(bool kq);

int main(){
	float A[1000];
	int n;
	nhap(A,n);
	bool kq = kiemtrasoduong(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtrasoduong(float A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]<=0)
			return false;
	return true;
}
void xuat(bool kq){
	if(kq)
		cout<<"mang vua nhap gom toan so duong"<<endl;
	else
		cout<<"co ton tai so am"<<endl;
}
