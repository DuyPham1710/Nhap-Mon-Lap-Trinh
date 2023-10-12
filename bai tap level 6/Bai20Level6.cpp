#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x, int &y);
int lietkesochandoanxy(int A[], int n, int x, int y);
void xuat(int kq);

int main(){
	int A[1000],n,x,y;
	nhap(A,n,x,y);
	lietkesochandoanxy(A,n,x,y);
	return 0;
}
void nhap(int A[], int &n, int &x, int &y){
	cin>>n>>x>>y;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int lietkesochandoanxy(int A[], int n, int x, int y){
	for (int i=0; i<n; i++)
		if(x<=A[i] && A[i]<=y && A[i]%2==0)
			xuat(A[i]);
}
void xuat(int kq){
	cout<<kq<<" ";
}
