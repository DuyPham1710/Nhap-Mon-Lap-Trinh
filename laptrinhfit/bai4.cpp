#include <iostream>
#define MAX 10000
using namespace std;

void nhap(long long A[], int &n);
int demso0tancung(long long A[], int n);
void xuat(int kq);

int main(){
	long long A[MAX];
	int n;
	nhap(A,n);
	int kq = demso0tancung(A,n);
	xuat(kq);
	return 0;
}
void nhap(long long A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int demso0tancung(long long A[], int n){
	long long t = 1;
	int dem = 0;
	for (int i=0; i<n; i++){
		if(A[i]!=0)
			t = t*A[i];
			while (t%10==0){
				t=t/10;
				dem++;
			}
	}
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
