#include <iostream>
using namespace std;

void nhap(long A[], int &n);
long SoDoiXungMax(long A[], int n);

int main(){
	long A[100];
	int n;
	nhap(A,n);
	long kq = SoDoiXungMax(A,n);
	cout<<kq;
	return 0;
}
void nhap(long A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool lasoDX(long x){
	int t = x;
	int a,s=0;
	while(x!=0){
		a=x%10;
		x=x/10;
		s = s*10+a;
	}
	if(s==t)
		return true;
	return false;
}	
long SoDoiXungMax(long A[], int n){
	int max = -1;
	for (int i=0; i<n; i++){
		if(lasoDX(A[i]) && A[i]>max)
			max = A[i];
	}
	return max;
}
