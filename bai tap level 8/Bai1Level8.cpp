#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool kiemtratinhchanle(int A[], int n);
void xuat(bool kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	bool kq = kiemtratinhchanle(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtratinhchanle(int A[], int n){
	for (int i=0; i<n-1; i++)
		if((A[i] + A[i+1])%2==0)
			return false;
	return true;
}
void xuat(bool kq){
	if(kq)
		cout<<"mang co tinh chan le"<<endl;
	else
		cout<<"mang khong co tinh chan le"<<endl;
}
