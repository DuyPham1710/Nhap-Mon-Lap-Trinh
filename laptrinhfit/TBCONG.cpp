#include <iostream>
#include <math.h>
#include <iomanip>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &n);
double TBCONG(int A[][MAX], int n);

int main(){
    int A[MAX][MAX],n;
    nhap(A,n);
    double kq = TBCONG(A,n);
    cout<<fixed<<setprecision(2)<<kq;
    return 0;
}
void nhap(int A[][MAX], int &n){
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>A[i][j];
}
double TBCONG(int A[][MAX], int n){
    double dem=0,t=0,avg=0;
    for(int j=0; j<n; j++){
        if(A[0][j]%2==0){
            t += A[0][j];
            dem++;
        }
    }
    for(int i=1; i<n; i++){
        if(A[i][0]%2==0){
            t += A[i][0];
            dem++;
        }
    }
    for(int j=1; j<n; j++){
        if(A[n-1][j]%2==0){
            t += A[n-1][j];
            dem++;
        }
    }
    for(int i=1; i<n-1; i++){
        if(A[i][n-1]%2==0){
            t += A[i][n-1];
            dem++;
        }
    }
    for(int i=1; i<n-1; i++){
        if(A[i][i]%2==0){
            t += A[i][i];
            dem++;
        }
    }
    for(int i=1; i<n-1; i++){
        if(A[i][n-i-1]%2==0){
            t += A[i][n-i-1];
            dem++;
        }
    }
    if(n%2!=0 && A[n/2][n/2]%2==0){
        t = t - A[n/2][n/2];
        dem--;
    }
    if(dem==0){
    	return avg;
    }
    else{
        avg = t/dem;
        return avg;
    }
}
