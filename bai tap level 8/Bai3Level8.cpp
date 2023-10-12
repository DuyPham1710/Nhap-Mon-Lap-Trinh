#include <iostream>
using namespace std;

void nhap(int A[], int &n);
bool laSoGanh(int x);
int soganh(int A[], int n);
void xuat(int kq);

int main(){
	int A[1000],n;
	nhap(A,n);
	int kq = soganh(A,n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n){
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
bool laSoGanh(int x){
	int dem = 0;
	int s = 0;
	int t = x;
	if(x>100){
		while(x!=0){
			int a=x%10;
			x=x/10;
			s = s*10 + a;
			dem++;
		}
	}
	if(s==t && dem%2!=0)
		return true;
	return false;
}
int soganh(int A[], int n){
	for (int i=0; i<n; i++)
		if(laSoGanh(A[i]))
			return A[i];
	return 0;
}
void xuat(int kq){
	if(kq==0)
		cout<<"khong co so ganh nao!"<<endl;
	else
		cout<<kq;
}
