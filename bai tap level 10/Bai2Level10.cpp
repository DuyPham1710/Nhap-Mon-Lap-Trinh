#include <iostream>
#include <string.h>
using namespace std;

void nhap(int &n);
void chuyenTuHe10sang2(int n, char S[]);
void chuyenTuHe10sang8(int n, char S[]);
void chuyenTuHe10sang16(int n, char S[]);
void xuat(char S[]);

int main(){
	int n;
	nhap(n);
	char S[20];
	chuyenTuHe10sang2(n,S);
	xuat(S);
	chuyenTuHe10sang8(n,S);
	xuat(S);
	chuyenTuHe10sang16(n,S);
	xuat(S);
	return 0;
}
void chuyenTuHe10sang16(int n, char S[]){
	int dem = 0;
	while (n>0){
		int x = n%16;
		n=n/16;
		if(x<10)
			S[dem] = x + '0';
		else
			S[dem] = x + 55;
		dem++;
	}
	S[dem] = '\0';
	strrev(S);
}
void chuyenTuHe10sang2(int n, char S[]){
	int dem = 0;
	while(n>0){
		int x = n%2;
		n=n/2;
		S[dem] = x + '0';
		dem++;	
	}
	S[dem] = '\0';
	strrev(S);
}
void chuyenTuHe10sang8(int n, char S[]){
	int d = 0;
	while(n>0){
		int x = n%8;
		n=n/8;
		S[d] = x + '0';
		d++;
	}
	S[d] = '\0';
	strrev(S);
}
void nhap(int &n){
	cin>>n;
}
void xuat(char S[]){
	cout<<S<<endl;
}
