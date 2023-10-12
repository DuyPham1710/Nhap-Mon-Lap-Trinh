#include <iostream>
using namespace std;

void nhap(int A[], int &n);
int dolechmin(int A[], int n);

int main(){
    int A[2000],n;
    nhap(A,n);
    int kq = dolechmin(A,n);
    cout<<kq;
    return 0;
}
void nhap(int A[], int &n){
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>A[i];
}
int dolechmin(int A[], int n){
    int d = 10e8;
    int x = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            x = A[j] - A[i];
            if(x<d){
                d = x;
            }
        }
    }
    return d;
}