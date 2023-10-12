#include <iostream>
using namespace std;
int xuly(int &a, int &b, int &c, int x, int y, int z, int t, int u, int v);
void xuat(int a, int b, int c);
int main(){
    int x,y,z,t,u,v;
    cin>>x>>y>>z>>t>>u>>v;
    int a,b,c;
    xuly(a,b,c,x,y,z,t,u,v);
    xuat(a,b,c);
    return 0;
}
int xuly(int &a, int &b, int &c, int x, int y, int z, int t, int u, int v){
    a=0;
    b=0;
    c=0;
    if(x==1){
        if(y==3)
            a += 3;
        else
            if(y==2){
                b += 3;
            }
            else
                if(y==1){
                    a += 1;
                    b += 1;
                }
    }
    if(x==2){
        if(y==3)
            b += 3;
        else
            if(y==2){
                a += 1;
                b += 1;
            }
            else
                if(y==1)
                    a+=3;
    }
    if(x==3){
        if(y==3){
            a+=1;
            b+=1;
        }
        else
            if(y==2)
                a+=3;
            else
                if(y==1)
                    b+=1;
    }
    if(z==1){
        if(t==3)
            a += 3;
        else
            if(t==2){
                c += 3;
            }
            else
                if(t==1){
                    a += 1;
                    c += 1;
                }
    }
    if(z==2){
        if(t==3)
            c += 3;
        else
            if(t==2){
                a += 1;
                c += 1;
            }
            else
                if(t==1)
                    a+=3;
    }
    if(z==3){
        if(t==3){
            a+=1;
            c+=1;
        }
        else
            if(t==2)
                a+=3;
            else
                if(t==1)
                    c+=1;
    }
    if(u==1){
        if(v==3)
            b += 3;
        else
            if(v==2){
                c += 3;
            }
            else
                if(v==1){
                    b += 1;
                    c += 1;
                }
    }
   if(u==2){
        if(v==3)
            c += 3;
        else
            if(v==2){
                b += 1;
                c += 1;
            }
            else
                if(v==1)
                    b+=3;
    }
    if(u==3){
        if(v==3){
            b+=1;
            c+=1;
        }
        else
            if(v==2)
                b+=3;
            else
                if(v==1)
                    c+=1;
    }
}
void xuat(int a, int b, int c){
    cout<<a<<" "<<b<<" "<<c;
}