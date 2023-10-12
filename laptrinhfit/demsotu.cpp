#include <iostream>
#include <string.h>
using namespace std;
int demsotu(char S[]);
int main(){
	char S[200];
	gets(S);
	int kq = demsotu(S);
	cout<<kq;
}
int demsotu(char S[]){
	int len = strlen(S);
	int dem = 0;
	if(S[0]!=' ')
		dem = 1;
	for (int i=0; i<len-1; i++){
		if(S[i]==' ' && S[i+1]!=' ')
			dem++;
	}
	return dem;
}
