#include <bits/stdc++.h>
using namespace std;

void nhap(int A[], char S[]);
int xuly(int A[], char S[]);
int chuyenhe2sang10(int n);

int main(){
	int A[100];
	char S[100];
	nhap(A,S);
	xuly(A,S);
	return 0;
}
int xuly(int A[], char S[]){
	int B[100][100],nS = 0;
	int len = strlen(S);
	for (int i=0; i<len; i++){
		B[0][i] = S[nS++] - '0';
	}
	int nA = 1;
	for(int i=1;i<len; i++){
		for(int j=len-1; j>=0; j--){
			B[i][j] = A[nA]%10;
			A[nA] = A[nA]/10;
		}
		nA++;
	}
	int C[100],tam=0,nC=0;
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			tam = tam*10 + B[i][j];
		}
		int x = chuyenhe2sang10(tam);
		C[nC++] = x;
		tam = 0;
	}
	for(int i=0; i<len; i++){
		for(int j=0; j<len; j++){
			tam = tam*10 + B[j][i];
		}
		int x = chuyenhe2sang10(tam);
		C[nC++] = x;
		tam = 0;
	}
	for(int i=0; i<len; i++){
		tam = tam*10 + B[i][i];
	}
	int k = chuyenhe2sang10(tam);
	C[nC++] = k;
	tam = 0;
	for(int i=0; i<len; i++){
		tam = tam*10 + B[i][len-i-1];
	}
	int y = chuyenhe2sang10(tam);
	C[nC++] = y;
	int min = C[0];
	for(int i=0; i<nC; i++)
		if(C[i]<min)
			min = C[i];
	char KQ[100];
	int dem=0;
	while(min>0){
		int a = min%2;
		min=min/2;
		KQ[dem++] = a + '0';
	}
	KQ[dem] = '\0';
	strrev(KQ);
	for(int i=0; i<len-dem; i++){
		cout<<'0';
	}
	cout<<KQ;
}

int chuyenhe2sang10(int n){
	int p = 0;
	int x = 0;
	while(n>0){
		x += (n%10)*pow(2,p);
		p++;
		n=n/10;
	}
	return x;
}
void nhap(int A[], char S[]){
	gets(S);
	for (int i=1; i<strlen(S); i++)
		cin>>A[i];
}

