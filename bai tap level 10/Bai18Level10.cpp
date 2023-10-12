#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
bool la_Max_Dong(int A[][MAX], int n, int x, int y);
bool la_Min_Cot(int A[][MAX], int m, int x, int y);
bool lasoYN(int A[][MAX], int m, int n, int x, int y);
int demSoYenNgua(int A[][MAX], int m, int n);
void xuat(int kq);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	int kq = demSoYenNgua(A,m,n);
	xuat(kq);
	return 0;
}
bool la_Min_Cot(int A[][MAX], int m, int x, int y){
	for (int i=0; i<m; i++)
		if(A[i][y]<A[x][y])
			return false;
	return true;
}
bool la_Max_Dong(int A[][MAX], int n, int x, int y){
	for (int j=0; j<n; j++)
		if(A[x][j]>A[x][y])
			return false;
	return true;
}
bool lasoYN(int A[][MAX], int m, int n, int x, int y){
	if(la_Max_Dong(A,n,x,y) && la_Min_Cot(A,m,x,y))
		return true;
	return false;
}
int demSoYenNgua(int A[][MAX], int m, int n){
	int dem = 0;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if(lasoYN(A,m,n,i,j))
				dem++;
	return dem;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
void xuat(int kq){
	cout<<kq;
}
