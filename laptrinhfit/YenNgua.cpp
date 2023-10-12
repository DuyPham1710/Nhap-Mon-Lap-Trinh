#include <iostream>
#define MAX 100
using namespace std;

void nhap(long A[][MAX], int &m, int &n);
bool laMaxDong(long A[][MAX], int n, int x, int y);
bool laMinCot(long A[][MAX], int m, int x, int y);
bool lasoYN(long A[][MAX], int m, int n, int x, int y);
int demSoYenNgua(long A[][MAX], int m, int n, int B[], int &nB);
void xuat(int kq);
void xuatvitri(int A[], int n);

int main(){
	long A[MAX][MAX];
    int B[100],nB,m,n;
	nhap(A,m,n);
	int kq = demSoYenNgua(A,m,n,B,nB);
	xuat(kq);
    xuatvitri(B,nB);
	return 0;
}
bool laMinCot(long A[][MAX], int m, int x, int y){
	for (int i=0; i<m; i++)
		if(A[i][y]<A[x][y])
			return false;
	return true;
}
bool laMaxDong(long A[][MAX], int n, int x, int y){
	for (int j=0; j<n; j++)
		if(A[x][j]>A[x][y])
			return false;
	return true;
}
bool lasoYN(long A[][MAX], int m, int n, int x, int y){
	if(laMaxDong(A,n,x,y) && laMinCot(A,m,x,y))
		return true;
	return false;
}
int demSoYenNgua(long A[][MAX], int m, int n, int B[], int &nB){
	int dem = 0;
    nB = 0;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if(lasoYN(A,m,n,i,j)){
				dem++;
				B[nB++] = i+1;
                B[nB++]  =j+1;
			}
	return dem;
}
void nhap(long A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
void xuat(int kq){
	cout<<kq<<endl;
}
void xuatvitri(int A[], int n){
	for (int i=0; i<n; i++)
        cout<<A[i]<<" ";
}
