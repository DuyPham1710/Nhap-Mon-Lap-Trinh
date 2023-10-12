#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool chusodaulasochan(int x);
int lietke(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	lietke(A,n);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
bool chusodaulasochan(int x){
	int a;
	while(x!=0){
		a = x%10;
		x=x/10;
	}
	if(a%2==0)
		return true;
	return false;
}
int lietke(int A[], int n){
	for (int i=0; i<n; i++)
		if(chusodaulasochan(A[i]))
			xuat(A[i]);
}
void xuat(int kq){
	cout<<kq<<" ";
}
