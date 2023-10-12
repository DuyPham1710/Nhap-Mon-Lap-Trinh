#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int tongchuso(int n);
int trochoi(int A[], int n);

int main(){
	int A[200],n;
	nhap(A,n);
	int kq = trochoi(A,n);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>A[i];
}
int tongchuso(int n){
	int a, t=0;
	while(n!=0){
		a=n%10;
		n=n/10;
		t = t + a;
	}
	return t;
}
int trochoi(int A[], int n){
	int t = tongchuso(A[n-1]);
	int x;
	int diem = 0;
	for(int i=0; i<n-1; i++){
		x = tongchuso(A[i]);
		if(t>x)
			diem++;
		else
			diem--;
	}
	return diem;
}
