#include <iostream>
#define MAX 1000
using namespace std;

void nhap(int A[], int &nA);
bool timthay(int A[], int nA, int x);
int demgiatrico1trong2mang(int A[], int nA, int B[], int nB);
void xuat(int kq);

int main(){
	int A[MAX],nA,B[MAX],nB;
	nhap(A,nA);
	nhap(B,nB);
	int kq = demgiatrico1trong2mang(A,nA,B,nB);
	xuat(kq);
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
int demgiatrico1trong2mang(int A[], int nA, int B[], int nB){
	int dem = 0;
	for (int i=0; i<nA; i++){
		if(timthay(B,nB,A[i])==false)
			dem++;
	}
	for(int i=0; i<nB; i++){
		if(timthay(A,nA,B[i])==false)
			dem++;
	}
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
