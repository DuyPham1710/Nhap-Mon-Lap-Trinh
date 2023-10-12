#include <iostream>
#include <string.h>
using namespace std;
int KLphantu(char S[]);
int main(){
    char S[50];
    gets(S);
    int kq = KLphantu(S);
    cout<<kq;
    return 0;
}
int KLphantu(char S[]){
    int t = 0;
    int len = strlen(S);
    for(int i=0; i<=len; i++){
        if(S[i]=='H'){
            if(S[i+1]>='0' && S[i+1]<='9')
                t += 1*(S[i+1]-'0');
            else
                t += 1;
        }
        if(S[i]=='O'){
            if(S[i+1]>='0' && S[i+1]<='9')
                t += 16*(S[i+1] - '0');
            else
                t += 16;
        }
        if(S[i]=='N'){
            if(S[i+1]>='0' && S[i+1]<='9')
                t += 14*(S[i+1] - '0');
            else
                t += 14;
        }
        if(S[i]=='C'){
            if(S[i+1]>='0' && S[i+1]<='9')
                t += 12*(S[i+1] - '0');
            else
                t += 12;
        }
    }
    return t;
}