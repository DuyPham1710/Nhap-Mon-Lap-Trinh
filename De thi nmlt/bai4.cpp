#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
bool laNT(int n);
int soNTmax(int A[][MAX], int m, int n);

int main(){
    int A[MAX][MAX],m,n;
    nhap(A,m,n);
    int kq = soNTmax(A,m,n);
    cout<<kq;
    return 0;
}
void nhap(int A[][MAX], int &m, int &n){
    cin>>m>>n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>A[i][j];
}
bool laNT(int n){
    int dem = 0;
    for(int i=1; i<=n; i++)
        if(n%i==0)
            dem++;
    if(dem==2)
        return true;
    return false;
}
int soNTmax(int A[][MAX], int m, int n){
    int B[MAX],nB=0;
    for(int i=0; i<m; i++){
        int t = 0;
        for(int j=0; j<n; j++){
            if(laNT(A[i][j])){
                t = t + A[i][j];
            }
        }
        B[nB++] = t;
    }
    int min = B[0];
    for(int i=0; i<nB; i++)
        if(B[i]<min)
            min = B[i];
    return min;
}