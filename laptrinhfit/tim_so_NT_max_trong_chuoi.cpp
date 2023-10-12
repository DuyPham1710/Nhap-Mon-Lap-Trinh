#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

bool laNT(int n);
int soNTmax(char S[]);

int main(){
	char S[MAX];
	gets(S);
	int kq = soNTmax(S);
	cout<<kq;
	return 0;
}
bool laNT(int n){
	int dem = 0;
	for (int i=1; i<=n; i++){
		if(n%i==0)
			dem++;
	}
	if(dem==2)
		return true;
	return false;
}
int soNTmax(char S[]){
	int x = 0;
	int max = 0;
	int len = strlen(S);
	for (int i=0; i<=len; i++){
		if(S[i]>='0' && S[i]<='9')
			x = x*10 + (S[i] - '0');
		else{
			if(laNT(x) && x>max){
				max = x;	
			}
			x = 0;
		}
	}
	return max;
}
