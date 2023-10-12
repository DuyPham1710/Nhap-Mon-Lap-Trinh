#include <iostream>
using namespace std;
void nhap(long &a, long &b, long &c);
int xuly(long a, long b, long c);
void xuat(int kq);
int main(){
	long a,b,c;
	nhap(a,b,c);
	int kq = xuly(a,b,c);
	xuat(kq);
	return 0;
}
int xuly(long a, long b, long c){
	int k = 0;
	for (int i=1; i<=c; i++){
		for (int j=1; j<=c; j++){
			if(a*i+b*j==c)
				k++;
		}
	}
	return k;
}
void nhap(long &a, long &b, long &c){
	cin>>a>>b>>c;
}
void xuat(int kq){
	cout<<kq;
}
