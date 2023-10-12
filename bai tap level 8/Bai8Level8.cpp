#include <iostream>
using namespace std;

void nhap(float A[], int &n);
float timsoamMax(float A[], int n);
void xuat(float kq);

int main(){
	float A[1000];
	int n;
	nhap(A,n);
	float kq = timsoamMax(A,n);
	xuat(kq);
	return 0;
}
void nhap(float A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
float timsoamMax(float A[], int n){
	float max = 0;
	for (int i=0; i<n; i++){
		if(A[i]<0){
			max = A[i];
			for (int j=i+1; j<n; j++)
				if(A[j]<0 && A[j]>max)
					max = A[j];
			break;
		}
	}
	return max;
}
void xuat(float kq){
	if(kq==0)
		cout<<"0";
	else
		cout<<kq;
}
