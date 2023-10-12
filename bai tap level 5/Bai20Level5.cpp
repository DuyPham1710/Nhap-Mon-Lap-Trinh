#include <iostream>
using namespace std;

void nhap(int &n);
int thuasoNT(int n);
void xuat(int kq);

int main(){
	int n;
	nhap(n);
	int kq  = thuasoNT(n);
	return 0;
}
void nhap(int &n){
	cin>>n;
}
int thuasoNT(int n){
	for (int i=2; i<=n; i++){
		while(n%i==0){
			xuat(i);
			n = n/i;
		}
	}
}
void xuat(int kq){
	cout<<kq<<" ";
}
