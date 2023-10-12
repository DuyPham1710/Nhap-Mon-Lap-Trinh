#include <iostream>
using namespace std;

void nhap(int A[], int &n, int &x);
int vitriXcuoicung(int A[], int n, int x);

int main(){
	int A[200],n,x;
	nhap(A,n,x);
	int kq = vitriXcuoicung(A,n,x);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n, int &x){
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int vitriXcuoicung(int A[], int n, int x){
	for (int i=n-1; i>=0; i--)
		if(A[i]==x)
			return i;
	return -1;
}
