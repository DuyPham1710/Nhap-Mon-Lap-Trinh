#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n, int &k);
bool kiemtragiamdan(int A[][MAX], int n, int k);
void xuat(bool kiemtra);

int main(){
	int A[MAX][MAX],m,n,k;
	nhap(A,m,n,k);
	bool kiemtra = kiemtragiamdan(A,n,k);
	xuat(kiemtra);
	return 0;
}
void nhap(int A[][MAX], int &m, int &n, int &k){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
	cin>>k;
}
bool kiemtragiamdan(int A[][MAX], int n, int k){
	for(int j=0; j<n-1; j++)
		if(A[k][j]<A[k][j+1])
			return false;
	return true;
}
void xuat(bool kiemtra){
	if(kiemtra==true)
		cout<<"giam dan";
	else
		cout<<"khong giam dan";
}

