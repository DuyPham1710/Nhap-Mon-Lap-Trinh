#include <iostream>
#define MAX 100
using namespace std;
void nhap(int A[], int &n, long &x);
int vitrithoaman(int A[], int n, long x);
int xuly(int A[], int &n, long x);
void xuat(int kq);
int main(){
	int A[MAX],n;
	long x;
	nhap(A,n,x);
	int kq = xuly(A,n,x);
	xuat(kq);
	return 0;
}
int vitrithoaman(int A[], int n, long x)
{
	if(x<=A[0])
        return 0;
    if(x>=A[n-1])
        return n;
    for (int i=0; i<n; i++)
        if(A[i]>=x)
            return i;
}
int xuly(int A[], int &n, long x){
	int vitri = vitrithoaman(A,n,x);
	for (int i=n-1; i>=vitri; i--)
		A[i+1] = A[i];
	A[vitri] = x;
	n++;
	return A[n/2];
}
void nhap(int A[], int &n, long &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
void xuat(int kq){
	cout<<kq;
}
