#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
bool laNT(int n);
int tinh(int A[][MAX], int m, int n);
int timthay(int A[], int n, int x);
bool kiemtra(int A[][MAX], int m, int n);

int main(){
    int A[MAX][MAX],m,n;
    nhap(A,m,n);
    int kq = tinh(A,m,n);
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
int timthay(int A[], int n, int x){
    int dem = 0;
    for(int i=0; i<n; i++)
        if(A[i]==x)
            dem++;
    return dem;
}
bool kiemtra(int A[][MAX], int m, int n){
    int dem = 0;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(laNT(A[i][j]))
                dem++;
    if(dem==0)
        return false;
    return true;
}
int tinh(int A[][MAX], int m, int n){
    int B[MAX],nB=0;
    int C[MAX],nC=0;
    if(kiemtra(A,m,n)==false)
        return -1;
    else{
        for(int i=0; i<m; i++){
            int dem = 0;
            int t = 0;
            for(int j=0; j<n; j++){
                if(laNT(A[i][j])){
                    dem++;
                    t += A[i][j];
                }
            }//              0 1 2 3 
            B[nB++] = dem;// 2 3 2 3
            C[nC++] = t;//   5 15 8 10
        }
        int max = B[0];
        int vitri = 0;
        for(int i=0; i<nB; i++){
            if(B[i]>max){
                max = B[i];
                vitri = i;
            }
        }
        return vitri;
    }
}