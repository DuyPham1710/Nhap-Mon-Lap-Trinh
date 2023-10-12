#include <iostream>
#include <string.h>
using namespace std;

void nhap(char S[]);
void XoaBoKhoangChanThua(char S[]);
void xuat(char S[]);

int main(){
	char S[1000];
	nhap(S);
	XoaBoKhoangChanThua(S);
	xuat(S);
	return 0;
}
void nhap(char S[]){
	gets(S);
}
void XoaBoKhoangChanThua(char S[]){
	while (S[0]==' ')
		strcpy(&S[0], &S[1]);
	for (int i=0; i<strlen(S)-1; i++){
		if(S[i]==' ' && S[i+1]==' '){
			strcpy(&S[i], &S[i+1]);
			i--;
		}
	}
	while (S[strlen(S)-1]==' ')
		strcpy(&S[strlen(S)-1], &S[strlen(S)]);
}
void xuat(char S[]){
	cout<<S;
}
