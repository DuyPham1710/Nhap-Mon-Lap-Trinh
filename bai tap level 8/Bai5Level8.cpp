#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool kiemtradangsong(int A[], int n);
void xuat(bool kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	bool kq = kiemtradangsong(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtradangsong(int A[], int n){
	for(int i=0; i<n-2; i++)
		if((A[i] > A[i+1] && A[i+1] < A[i+2] || A[i] < A[i+1] && A[i+1] > A[i+2])==false)
			return false;
	return true;
}
void xuat(bool kq){
	if(kq==0)
		cout<<"mang khong co dang song"<<endl;
	else
		cout<<"co dang song"<<endl;
}
