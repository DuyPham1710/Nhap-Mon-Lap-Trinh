#include <iostream>
#include <string.h>
using namespace std;

void nhap(char S[]);
bool kiemtra(char S1[], char S2[]);
void xuat(bool kq);

int main(){
	char S1[100],S2[100];
	nhap(S1);
	nhap(S2);
	bool kq = kiemtra(S1,S2);
	xuat(kq);
	return 0;
}
void nhap(char S[]){
	gets(S);
}
bool kiemtra(char S1[], char S2[]){
	if(strstr(S1,S2) != NULL || strstr(S2,S1) != NULL)
		return true;
	return false;
}
void xuat(bool kq){
	if(kq==false)
		cout<<"khong la chuoi con";
	else
		cout<<"la chuoi con";
}
