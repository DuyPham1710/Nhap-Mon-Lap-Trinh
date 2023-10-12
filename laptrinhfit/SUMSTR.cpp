#include <bits/stdc++.h>
using namespace std;
int tinhtong(char S[]);
int main(){
	int n;
	cin>>n;
	char S[10000];
	cin>>S;
	int kq = tinhtong(S);
	cout<<kq;
	return 0;
}
int tinhtong(char S[]){
	int tong = 0;
	int x = 0;
	int len = strlen(S);
	for (int i=0; i<=len; i++){
		if(S[i]>='0' && S[i]<='9'){
			x = x*10 + (S[i] - '0');
		}
		else{
			tong = tong + x;
			x = 0;
		}	
	}
	return tong;
}
