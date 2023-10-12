#include <iostream>
using namespace std;
int xettinhchanle(int A[], int n);
int main(){
    int A[100],n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>A[i];
    int kq = xettinhchanle(A,n);
    cout<<kq;
    return 0;
}
int xettinhchanle(int A[], int n){
    for(int i=0; i<n-1; i++){
        if(!((A[i]%2==0 && A[i+1]&2!=0) || (A[i]%2!=0 && A[i+1]%2==0)))
            return i+1;
    }
    return -1;
}