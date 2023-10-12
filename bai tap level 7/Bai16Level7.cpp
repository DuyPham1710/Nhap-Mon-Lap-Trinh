#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int x);
bool laHH(int y);
int kiemtrasoNTvasoHH(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = kiemtrasoNTvasoHH(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laNT(int x){
	int a = 0;
	for (int i=1; i<=x; i++){
		if(x%i==0)
			a++;
	}
	if(a==2)
		return true;
	return false;
}
bool laHH(int y){
	int b = 0;
	for (int i=1; i<y; i++){
		if(y%i==0)
			b = b + i;
	}
	if(b==y)
		return true;
	return false;
}
int kiemtrasoNTvasoHH(int A[], int n){
	int demNT = 0;
	int demHH = 0;
	for(int i=0; i<n; i++){
		if(laNT(A[i]))
			demNT++;
		if(laHH(A[i]))
			demHH++;
	}
	if(demNT==demHH)
		return 1;
	else
		return 0;
}
void xuat(int kq){
	if(kq==0)
		cout<<"khong bang nhau !"<<endl;
	else
		cout<<"bang nhau."<<endl;
}
