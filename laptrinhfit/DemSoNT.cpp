#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int n);
int demNT(int A[], int n);

int main(){
	int A[200],n;
	nhap(A,n);
	int kq = demNT(A,n);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laNT(int n){
	int dem = 0;
	for (int i=1; i<=n; i++)
		if(n%i==0)
			dem++;
	if(dem==2)
		return true;
	return false;
}
int demNT(int A[], int n){
	int dem = 0;
	for (int i=0; i<n; i++)
		if(laNT(A[i]))
			dem++;
	return dem;
}
