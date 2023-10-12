#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

void nhap(char S[], int &n, int &pos);
void trich_dau(char S1[], char S2[], int n);
void trich_cuoi(char S1[], char S2[], int n);
void trich_tai_vi_tri_pos(char S1[], char S2[], int n, int pos);
void xuat(char S[]);

int main(){
	char S1[MAX],S2[MAX];
	int n,pos;
	nhap(S1,n,pos);
	trich_dau(S1,S2,n);
	xuat(S2);
	trich_cuoi(S1,S2,n);
	xuat(S2);
	trich_tai_vi_tri_pos(S1,S2,n,pos);
	xuat(S2);
	return 0;
}
void nhap(char S[], int &n, int &pos){
	gets(S);
	cin>>n>>pos;
}
void trich_dau(char S1[], char S2[], int n){
	if(n>strlen(S1))
		n = strlen(S1);
	for (int i=0; i<n; i++)
		S2[i] = S1[i];
	S2[n] = '\0'; 
}
void trich_cuoi(char S1[], char S2[], int n){
	int x = strlen(S1) - n;
	if (x<0)
		x=0;
	for (int i=0; i<n; i++)
		S2[i] = S1[i+x];
	S2[n] = '\0';
}
void trich_tai_vi_tri_pos(char S1[], char S2[], int n, int pos){
	if(n > strlen(S1) - pos)
		n = strlen(S1) - pos;
	for (int i=0; i<n; i++)
		S2[i] = S1[i+pos];
	S2[n] = '\0';
}
void xuat(char S[]){
	cout<<S<<endl;
}
