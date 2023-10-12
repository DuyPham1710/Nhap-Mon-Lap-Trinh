#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &n, int &k);
int tinh(int A[][MAX], int x, int y, int k, int n);
int phanthuong(int A[][MAX], int n, int k);

int main(){
    int A[MAX][MAX],n,k;
    nhap(A,n,k);
    int kq = phanthuong(A,n,k);
    cout<<kq;
    return 0;
}
void nhap(int A[][MAX], int &n, int &k){
    cin>>n>>k;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>A[i][j];
}
int tinh(int A[][MAX], int x, int y, int k, int n){
    int t = 0;
    for(int i=x; i<=x+k-1; i++){
        for(int j=y; j<=y+k-1; j++){
            t += A[i][j];
        }
    }
    return t;
}
int phanthuong(int A[][MAX], int n, int k){
    int max = 0;
    int B[MAX][MAX];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            B[i][j] = tinh(A,i,j,k,n);
            if(B[i][j]>max)
                max = B[i][j];
        }
    }
    return max;
}