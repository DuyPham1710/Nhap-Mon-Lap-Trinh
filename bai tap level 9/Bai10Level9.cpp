#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &nA);
bool timthay(int A[], int nA, int x);
int lietkegiatrico1trong2mang(int A[], int nA, int B[], int nB);
void xuat(int kq);

int main(){
	int A[MAX],nA,B[MAX],nB;
	nhap(A,nA);
	nhap(B,nB);
	lietkegiatrico1trong2mang(A,nA,B,nB);
	return 0;
}
bool timthay(int A[], int nA, int x){
	for (int i=0; i<nA; i++)
		if(A[i]==x)
			return true;
	return false;
}
void nhap(int A[], int &nA){
	cin>>nA;
	for (int i=0; i<nA; i++)
		cin>>A[i];
}
int lietkegiatrico1trong2mang(int A[], int nA, int B[], int nB){
	for (int i=0; i<nA; i++){
		if(timthay(B,nB,A[i])==false)
			xuat(A[i]);
	}
	for(int i=0; i<nB; i++){
		if(timthay(A,nA,B[i])==false)
			xuat(B[i]);
	}
}
void xuat(int kq){
	cout<<kq<<"  ";
}
