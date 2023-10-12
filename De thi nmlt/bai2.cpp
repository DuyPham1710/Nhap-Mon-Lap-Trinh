#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

long tinh(char A[], char B[]);
long he16sang10(char S[]);

int main(){
    char A[10],B[10];
    gets(A);
    gets(B);
    long kq = tinh(A,B);
    cout<<kq; 
}
long tinh(char A[], char B[]){
    long x = he16sang10(A);
    long y = he16sang10(B);
    long kq = x + y;
    return kq;
}
long he16sang10(char S[]){
    strrev(S);
    int len = strlen(S);
    int x = 0;
    for(int i=0; i<len; i++){
        if(S[i]>='0' && S[i]<='9')
            x += (S[i] - '0')*pow(16,i);
        else
            x += (S[i] - 55)*pow(16,i);
    }
    return x;
}