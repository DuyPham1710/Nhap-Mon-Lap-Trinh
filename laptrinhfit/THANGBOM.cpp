#include <iostream>
using namespace std;
int tien(int n, int m);
int main(){
    int n,m;
    cin>>n>>m;
    int kq = tien(n,m);
    cout<<kq;
    return 0;
}
int tien(int n, int m){
    int tien = 0;
    if(n&2!=0){
        if  (n>5){
            tien = n*m*80/100;
        }
        else{
            tien = n*m;
        }
    }
    if(n%2==0){
        if(n>4){
            tien = n*m*85/100;
        }
        else{
            tien = n*m;
        }
    }
    return tien;
}