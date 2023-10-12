#include <iostream>
#include <math.h>
#define MAX 1000
using namespace std;

void nhap(long A[], int &n);
bool lasoCP(long x);
long soCPmax(long A[], int n);
void xuat(long kq);

int main(){
    long A[MAX];
    int n;
    nhap(A,n);
    long kq = soCPmax(A,n);
    xuat(kq);
    return 0;
}
bool lasoCP(long x){
    if(sqrt(x)==int(sqrt(x)))
        return true;
    return false;
}
long soCPmax(long A[], int n){
    long max = -1;
    for (int i=0; i<n; i++)
        if(lasoCP(A[i]) && A[i]>max)
            max = A[i];
    return max;
}
void nhap(long A[], int &n){
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>A[i];
}
void xuat(long kq){
    cout<<kq;
}
