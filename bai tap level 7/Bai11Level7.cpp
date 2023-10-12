#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool kiemtratanglientuc(int A[], int n);
void xuat(bool kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	bool kq = kiemtratanglientuc(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtratanglientuc(int A[], int n){
	for(int i=0; i<n-1; i++)
		if(A[i]>A[i+1])
			return false;
	return true;
}
void xuat(bool kq){
	if(kq)
		cout<<"tang lien tuc"<<endl;
	else
		cout<<"khong tang lien tuc"<<endl;
}
