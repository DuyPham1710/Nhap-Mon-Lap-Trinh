#include <iostream>
#include <string.h>
using namespace std;
void XoaBoKhoangChanThua(char S[]);
int main(){
	char S[100];
	gets(S);
	cout<<S<<endl;
	strrev(S);
	cout<<S<<endl;
	strrev(S);
	int len = strlen(S);
	for (int i=0; i<=len; i++){
		if(S[i]>='A' && S[i]<='Z'){
			cout<<S[i]<<endl;
		}
	}
	char B[100], C[100]; 
	int nB = 0, max = 0;
	for (int i=0; i<=len; i++){
		if(S[i]!=' ' && S[i]!='\0'){
			B[nB++] = S[i];
		}
		else{
			B[nB] = '\0';
			if(strlen(B)>max){
				strcpy(C,B);
				max = strlen(B);
			}
			nB = 0;	
		}
	}
	cout<<C<<endl;
	XoaBoKhoangChanThua(S);
	cout<<S<<endl;
	return 0;
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
