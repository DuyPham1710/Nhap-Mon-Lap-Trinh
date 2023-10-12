#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int x);
int kiemtrasoNT(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = kiemtrasoNT(A,n);
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
	for (int i=1; i<=x; i++){
		if(x%i==0)
			dem++;
	}
	if(dem==2)
		return true;
	return false;
}
int kiemtrasoNT(int A[], int n){
	for (int i=0; i<n; i++)
		if(laNT(A[i])==false)
			return 0;
	return 1;
}
void xuat(int kq){
	if(kq==0)
		cout<<"khong gom cac so nguyen to"<<endl;
	else
		cout<<"co"<<endl;
}
