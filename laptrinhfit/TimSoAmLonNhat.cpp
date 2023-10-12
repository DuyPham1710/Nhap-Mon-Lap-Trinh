#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int soamdautien(int A[], int n);
int TimSoAmLonNhat(int A[], int n);

int main(){
	int A[200],n;
	nhap(A,n);
	int kq = TimSoAmLonNhat(A,n);
	cout<<kq;
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
int soamdautien(int A[], int n){
	for (int i=0; i<n; i++)
		if(A[i]<0)
			return i;
	return -1;
}
int TimSoAmLonNhat(int A[], int n){
	int vitri = soamdautien(A,n);
	int max = A[vitri];
	if(vitri!=-1){
		for (int i=vitri; i<n; i++)
			if(A[i]<0 && A[i]>max)
				max = A[i];
		return max;
	}
	else
		return 0;
}
