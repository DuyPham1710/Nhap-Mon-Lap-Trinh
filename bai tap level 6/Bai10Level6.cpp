#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x);
int demsobangx(int A[], int n, int x);
void xuat(int xuly);

int main(){
	int A[1000],n,x;
	nhap(A,n,x);
	int xuly = demsobangx(A,n,x);
	xuat(xuly);
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int demsobangx(int A[], int n, int x){
	int dem = 0;
	for (int i=0; i<n; i++){
		if(A[i]==x)
			dem++;
	}
	return dem;
}
void xuat(int xuly){
	cout<<xuly;
}

