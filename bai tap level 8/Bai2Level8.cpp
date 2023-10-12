#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool kiemtra2so0lientiep(int A[], int n);
void xuat(bool kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	bool kq = kiemtra2so0lientiep(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtra2so0lientiep(int A[], int n){
	int x = 0;
	for (int i=0; i<n-1; i++)
		if(A[i]==x && A[i+1]==x)
			return true;
	return false;
}
void xuat(bool kq){
	if(kq)
		cout<<"ton tai 2 gia tri 0 lien tiep"<<endl;
	else
		cout<<"khong ton tai !"<<endl;
}
