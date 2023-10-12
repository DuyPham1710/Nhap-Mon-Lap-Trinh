#include <iostream>
using namespace std;

void nhap(int A[], int &n);
float AVGChiaHetCho5(int A[], int n);
void xuat(float kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	float kq = AVGChiaHetCho5(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
}
float AVGChiaHetCho5(int A[], int n){
	float t = 0;
	float dem = 0;
	float avg = 0;
	for (int i=0; i<n; i++){
		if(A[i]%5==0){
			t = t + A[i];
			dem++;
		}
	}
	if(dem==0)
		return avg;
	else{
		float avg = t/dem;
		return avg;
	}
}
void xuat(float kq){
	cout<<kq;
}
