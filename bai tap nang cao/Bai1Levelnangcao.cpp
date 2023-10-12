// chua xong
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char S[MAX];
	nhap(S);
	daonguoctu(S);
	xuat(S);
	return 0;
}
void daonguoctu(char S[]){
	int len = strlen(S);
	for (int i=0; i<len; i++){
		if(S[i]==' ' && S[i+1]!=' ')
	}
}
void nhap(char S[]){
	gets(S);
}
void xuat(char S[]){
	cout<<S;
}
