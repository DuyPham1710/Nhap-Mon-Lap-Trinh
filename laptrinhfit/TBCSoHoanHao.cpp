#include <iostream>
#include <math.h>
using namespace std;
bool lasoHH(int x);
long TBCSoHoanHao(int A[], int n);
int main(){
	int A[10000],n;
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
	long kq = TBCSoHoanHao(A,n);
	cout<<kq;
	return 0;
}
bool lasoHH(int x){
	int t = 0;
	for (int i=1; i<x; i++)
		if(x%i==0)
			t += i;
	if(t==x)
		return true;
	return false;
}
long TBCSoHoanHao(int A[], int n){
	long t = 0;
	int dem = 0;
	double avg = 0;
	for (int i=0; i<n; i++){
		if(lasoHH(A[i])){
			t += A[i];
			dem++;
		}
	}
	if(dem>=1){
		avg = (double)t/dem;
		avg = round(avg);
		return avg;
	}
	else
		return avg;
	
	
}
