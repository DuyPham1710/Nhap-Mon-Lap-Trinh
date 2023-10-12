#include <iostream>
#include <string.h>
using namespace std;
void xoakytu(char S[]);
int main(){
	char S[2000];
	gets(S);
	xoakytu(S);
	cout<<S;
	return 0;
}
void xoakytu(char S[]){
	int len = strlen(S);
	for(int i=0; i<=len; i++){
		if(S[i]=='A'){
			strcpy(&S[i],&S[i+1]);
			i--;
		}
		if(S[i]=='E'){
			strcpy(&S[i],&S[i+1]);
			i--;
		}
		if(S[i]=='I'){
			strcpy(&S[i],&S[i+1]);
			i--;
		}
		if(S[i]=='O'){
			strcpy(&S[i],&S[i+1]);
			i--;
		}
		if(S[i]=='U'){
			strcpy(&S[i],&S[i+1]);
			i--;
		}
	}
}
