#include <iostream>
#include <string.h>
using namespace std;

int tong(char S[]);

int main(){
    char S[200];
    gets(S);
    int kq = tong(S);
    cout<<kq;
    return 0;
}
int tong(char S[]){
    int len = strlen(S);
    int x = 0;
    int t = 0;
    for(int i=0; i<=len; i++){
        if(S[i]>='0' && S[i]<='9'){
            x = x + (S[i] - '0');
        }
        else{
            t = t + x;
            x = 0;
        }
    }
    return t;
}