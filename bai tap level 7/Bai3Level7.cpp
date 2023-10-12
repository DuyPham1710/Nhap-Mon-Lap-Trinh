#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int x);
int timsoNTcuoicung(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = timsoNTcuoicung(A,n);
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
int timsoNTcuoicung(int A[], int n){
	for (int i=n-1; i>=0; i--)
		if(laNT(A[i]))
			return A[i];
	return -1;
}
void xuat(int kq){
	cout<<kq;
}
