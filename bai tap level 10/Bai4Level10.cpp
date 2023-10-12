#include <iostream>
#include <string.h>
using namespace std;

void nhap(char S[]);
int demsotu(char S[]);
void xuat(int kq);
int main(){
	char S[1000];
	nhap(S);
	int kq = demsotu(S);
	xuat(kq);
	return 0;
}
void nhap(char S[]){
	gets(S);
}
int demsotu(char S[]){
	int dem = 0;
	int len = strlen(S);
	if(S[0]!=' ')
		dem = 1;
	for (int i=0; i<len-1; i++)
		if(S[i]==' ' && S[i+1]!=' ')
			dem++;
	return dem;
}
void xuat(int kq){
	cout<<kq;
}
