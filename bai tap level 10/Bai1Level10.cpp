#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

void ChuyenTuHe16sang10(char S[], int &n);

int main(){
	char S[17];
	gets(S);
	int n;
	ChuyenTuHe16sang10(S,n);
	cout<<n;
	return 0;
}
void ChuyenTuHe16sang10(char S[], int &n){
	strrev(S);
	n = 0;
	for (int i=0; i<strlen(S); i++){
		if(S[i]>='0' && S[i]<='9')
			n = n + (S[i] - '0')*pow(16,i);
		else
			n = n + (S[i] + 10 - 'A')*pow(16,i);
	}
}
