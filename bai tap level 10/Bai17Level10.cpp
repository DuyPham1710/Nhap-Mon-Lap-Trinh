#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
bool la_Max_Dong(int A[][MAX], int n, int x, int y);
bool la_Max_Cot(int A[][MAX], int m, int x, int y);
bool la_Max_Len_Trai(int A[][MAX], int m, int n, int x, int y);
bool la_Max_Len_Phai(int A[][MAX], int m, int n, int x, int y);
bool la_Max_Xuong_Trai(int A[][MAX], int m, int n, int x, int y);
bool la_Max_Xuong_Phai(int A[][MAX], int m, int n, int x, int y);
bool la_so_hoang_hau(int A[][MAX], int m, int n, int x, int y);
int dem_hoang_hau(int A[][MAX], int m, int n);
void xuat(int kq);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	int kq = dem_hoang_hau(A,m,n);
	xuat(kq);
	return 0;
}
bool la_Max_Dong(int A[][MAX], int n, int x, int y){
	for (int j=0; j<n; j++)
		if(A[x][j]>A[x][y])
			return false;
	return true;
}
bool la_Max_Cot(int A[][MAX], int m, int x, int y){
	for (int i=0; i<m; i++)
		if(A[i][y]>A[x][y])
			return false;
	return true;
}
bool la_Max_Len_Trai(int A[][MAX], int m, int n, int x, int y){
	int i = x-1;
	int j = y-1;
	while (i>=0 && j>=0){
		if(A[i][j]>A[x][y])
			return false;
		i--;
		j--;
	}
	return true;
}
bool la_Max_Len_Phai(int A[][MAX], int m, int n, int x, int y){
	int i = x-1;
	int j = y+1;
	while (i>=0 && j<n){
		if(A[i][j]>A[x][y])
			return false;
		i--;
		j++;
	}
	return true;
}
bool la_Max_Xuong_Trai(int A[][MAX], int m, int n, int x, int y){
	int i = x+1;
	int j = y-1;
	while (i<m && j>=0){
		if(A[i][j]>A[x][y])
			return false;
		i++;
		j--;
	}
	return true;
}
bool la_Max_Xuong_Phai(int A[][MAX], int m, int n, int x, int y){
	int i = x+1;
	int j = y+1;
	while (i<m && j<n){
		if(A[i][j]>A[x][y])
			return false;
		i++;
		j++;
	}
	return true;
}
bool lasohoanghau(int A[][MAX], int m, int n, int x, int y){
	if(la_Max_Dong(A,n,x,y) && la_Max_Cot(A,m,x,y) && la_Max_Xuong_Phai(A,m,n,x,y) && la_Max_Xuong_Trai(A,m,n,x,y) && la_Max_Len_Phai(A,m,n,x,y) && la_Max_Len_Trai(A,m,n,x,y))
		return true;
	return false;
}
int dem_hoang_hau(int A[][MAX], int m, int n){
	int dem = 0;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if(lasohoanghau(A,m,n,i,j))
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
