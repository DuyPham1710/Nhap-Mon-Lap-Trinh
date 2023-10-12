// chua xong
#include <iostream>
using namespace std;

void nhap(int A[], int &n);
void daycontoanduong(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	daycontoanduong(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void daycontoanduong(int A[], int n){
	int len = 0;
	int lentam = 0;
	int index = -1;
	int indextam = 0;
	for (int i=0; i<n; i++){
		if(A[i]>0)
			lentam++;
		else{
			lentam=0;
			indextam=i+1;
		}
		if(lentam>len)
			len = lentam;
			
		
	}
		
}
void xuat(int kq){
	cout<<kq<<" ";
}
