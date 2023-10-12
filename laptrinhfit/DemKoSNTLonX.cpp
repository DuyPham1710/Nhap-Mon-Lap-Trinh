#include <iostream>
using namespace std;
int dem(long A[], int n, int x);
bool laNT(long x);
int main(){
	long A[100];
	int n,x;
	cin>>n>>x;
	for (int i=0; i<n; i++)
		cin>>A[i];
	int kq = dem(A,n,x);
	cout<<kq;
	return 0;
}
bool laNT(long x){
	int dem = 0;
	for (int i=1; i<=x; i++)
		if(x%i==0)
			dem++;
	if(dem==2)
		return true;
	return false;
}
int dem(long A[], int n, int x){
	int dem = 0;
	for (int i=0; i<n; i++)
		if(laNT(A[i])==false && A[i]>x)
			dem++;
	return dem;
}
