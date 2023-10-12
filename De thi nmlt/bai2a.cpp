#include <iostream>
using namespace std;

int tongchuso(int n);
int trochoi(int A[], int n);

int main(){
    int A[150],n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>A[i];
    int kq = trochoi(A,n);
    cout<<kq;
    return 0;
}
int trochoi(int A[], int n){
    int x = tongchuso(A[n-1]);
    int diem = 0;
    for(int i=0; i<n-1; i++){
        if(tongchuso(A[i])<x)
            diem++;
        else
            diem--;
    }
    return diem;
}
int tongchuso(int n){
    int t = 0,a;
    while(n!=0){
        a = n%10;
        n=n/10;
        t += a;
    }
    return t;
}