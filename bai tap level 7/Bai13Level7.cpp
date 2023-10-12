#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool kiemtrasole(int A[], int n);
void xuat(bool kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	bool kq = kiemtrasole(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtrasole(int A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]%2==0)
			return false;
	return true;
}
void xuat(bool kq){
	if(kq)
		cout<<"mang vua nhap gom toan so le"<<endl;
	else
		cout<<"khong gom toan so le"<<endl;
}
