#include <iostream>
#include <string.h>
using namespace std;

void nhap(char S[]);
void doithanhchuhoa(char S[]);
void xuat(char S[]);

int main(){
	char S[100];
	nhap(S);
	doithanhchuhoa(S);
	xuat(S);
	return 0;
}
void nhap(char S[]){
	gets(S);
}
void doithanhchuhoa(char S[]){
	int len = strlen(S);
	if(S[0]==' '){
		for (int i=0; i<len; i++){
			if(S[i]==' ' && S[i+1] != ' ')
				if(S[i+1]>=97)
					S[i+1] = S[i+1] - 32;
				else
					S[i+1] = S[i+1];
		}
	}
	else{
		if(S[0]>=97)
			S[0] = S[0] - 32;
		else
			S[0] = S[0];
		for(int i=1; i<len; i++){
			if(S[i]==' ' && S[i+1]!=' ')
				if(S[i+1]>=97)
					S[i+1] = S[i+1] - 32;
				else
					S[i+1] = S[i+1];
		}
	}
}
void xuat(char S[]){
	cout<<S;
}
