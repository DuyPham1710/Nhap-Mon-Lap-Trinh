#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[], int &n);
int vitriNTmin(int A[], int n);
void xuat(int kq);

int main(){
	int A[MAX],n; 
	nhap(A,n);
	int kq = vitriNTmin(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laNT(int n){
	int dem = 0;
	for (int i=1; i<=n; i++){
		if(n%i==0)
			dem++;
	}
	if(dem==2)
		return true;
	return false;
}
int vitriNTmin(int A[], int n){
	int min = 0;
	int vitrimin = -1;
	for (int i=0; i<n; i++){
		if(laNT(A[i])){
			min = A[i];
			vitrimin = i;
			for(int j=vitrimin; j<n; j++){
				if(laNT(A[j]) && A[j]<min){
					min = A[j];
					vitrimin = j;
				}
			}
			break;
		}
	}
	return vitrimin;
}
void xuat(int kq){
	cout<<kq;
}
