#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x);
int vitrithoaman(int A[], int n, int x);
int chenX(int A[], int &n, int x);
void xuat(int A[], int n);

int main(){
	int A[250],n,x;
	nhap(A,n,x);
	chenX(A,n,x);
	xuat(A,n);
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int vitrithoaman(int A[], int n, int x)
{
	if(x<=A[0])
        return 0;
    if(x>=A[n-1])
        return n;
    for (int i=0; i<n; i++)
        if(A[i]>=x)
            return i;
}
int chenX(int A[], int &n, int x){
	int vitri = vitrithoaman(A,n,x);
	for (int i=n-1; i>=vitri; i--)
		A[i+1] = A[i];
	A[vitri] = x;
	n++;
}
void xuat(int A[], int n){
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
}
