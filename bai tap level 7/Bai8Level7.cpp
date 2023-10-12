#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laNT(int x);
float TBCsoNT(int A[], int n);
void xuat(float kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	float kq = TBCsoNT(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laNT(int x){
	int temp = 0;
	for(int i=1; i<=x; i++){
		if(x%i==0)
			temp++;
	}
	if(temp==2)
		return true;
	return false;
}
float TBCsoNT(int A[], int n){
	int t = 0;
	int dem = 0;
	float avg = 0;
	for(int i=0; i<n; i++){
		if(laNT(A[i])){
			t = t + A[i];
			dem++;
		}
	}
	if(dem==0)
		return 0;
	else{
		avg = float(t)/dem;
		return avg;
	}
	
}
void xuat(float kq){
	cout<<kq;
}
