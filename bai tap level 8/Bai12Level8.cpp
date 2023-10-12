#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int ViTriAmdautien(int A[], int n);
int TimvitrisoamMax(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = TimvitrisoamMax(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int ViTriAmdautien(int A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]<0)
			return i;
	return -1;
}
int TimvitrisoamMax(int A[], int n){
	int vitrimin = ViTriAmdautien(A,n);
	if(vitrimin!=-1){
		for (int i=vitrimin; i<n; i++)
				if(A[i]<0 && A[i]>A[vitrimin])
					vitrimin = i;
		return vitrimin;
	}
	else
		return -1;
}
void xuat(int kq){
	cout<<kq;
}
