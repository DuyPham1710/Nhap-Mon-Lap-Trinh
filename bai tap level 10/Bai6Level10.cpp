#include <iostream>
#include <string.h>
using namespace std;

void nhap(char S[]);
int tinhtong(char S[]);
void xuat(int kq);

int main(){
	char S[100];
	nhap(S);
	int kq = tinhtong(S);
	xuat(kq);
	return 0;
}
void nhap(char S[]){
	gets(S);
}
int tinhtong(char S[]){
	int tong = 0;
	int x = 0;
	int len = strlen(S);
	for (int i=0; i<=len; i++){
		if(S[i]>='0' && S[i]<='9'){
			x = x*10 + (S[i] - '0');
		}
		else{
			tong = tong + x;
			x = 0;
		}	
	}
	return tong;
}
void xuat(int kq){
	cout<<kq;
}
