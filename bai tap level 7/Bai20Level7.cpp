#include <iostream>
using namespace std;

void nhap(float A[], int &n);
bool kiemtradoixung(float A[], int n);
void xuat(bool kq);

int main(){
	float A[1000];
	int n;
	nhap(A,n);
	bool kq = kiemtradoixung(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool kiemtradoixung(float A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]!=A[n-i-1])
			return false;
	return true;
}
void xuat(bool kq){
	if(kq==false)
		cout<<"khong doi xung"<<endl;
	else
		cout<<"doi xung"<<endl;
}
