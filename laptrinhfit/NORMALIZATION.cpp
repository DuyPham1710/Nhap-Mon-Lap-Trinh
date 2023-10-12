#include <iostream>
#include <string.h>
using namespace std;
void xuly(char S[]);
int main(){
    char S[200];
    gets(S);
    xuly(S);
    cout<<S;
    return 0;
}
void xuly(char S[]){
    for(int i=0; i<=strlen(S); i++){
        if(S[i]>=33 && S[i]<=47){
            S[i] = ' ';
        }
        if(S[i]>=58 && S[i]<=64){
            S[i] = ' ';
        }
        if(S[i]>=91 && S[i]<=96){
            S[i] = ' ';
        }
        if(S[i]>=123){
            S[i] = ' ';
        }
    }
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
	int len = strlen(S);
    strlwr(S);
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