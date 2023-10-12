#include <iostream>
#include <string.h>
#define MAX 500
using namespace std;

int main(){
    char A[MAX],B[MAX],C[MAX];
    gets(A);
    int i=0,nC=0,flag=0;
    C[nC] = '\0';
    while(i<strlen(A)){
        if(A[i]>='0' && A[i]<='9'){
            flag = flag*10 + (A[i]-'0');
            i++;
        }
        else if(A[i]>='a' && A[i]<='z'){
            int nB = 0;
            for(int j=i; j<=strlen(A); j++){
                if(A[j]>='a' && A[j]<='z'){
                    B[nB++] = A[j];
                }
                else{
                    B[nB] = '\0';
                    for(int k=1; k<=flag; k++){
                        strcat(C,B);
                    }
                    i=j;
                    flag=0;
                    break;
                }
            }
        }
        else{
            puts(C);
            break;
        }
    }

}
