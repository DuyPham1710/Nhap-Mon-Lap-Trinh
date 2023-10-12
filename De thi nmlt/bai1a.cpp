#include <iostream>
using namespace std;

bool hmslientruoc(int h, int m, int s, int &h1, int &m1, int &s1);
bool hople(int h, int m, int s);
void xuat(int kq, int h1, int m1, int s1);
int main(){
    int h,m,s;
    cin>>h>>m>>s;
    int h1,m1,s1;
    bool kq = hmslientruoc(h,m,s,h1,m1,s1);
    xuat(kq,h1,m1,s1);
    return 0;
}
void xuat(int kq, int h1, int m1, int s1){
    if(kq==false)
        cout<<"0";
    else
        cout<<h1<<" "<<m1<<" "<<s1;
}
bool hmslientruoc(int h, int m, int s, int &h1, int &m1, int &s1){
    if(hople(h,m,s)){
        h1 = h;
        m1 = m;
        s1 = s-1;
        if(s==0){
            s1 = 59;
            m1--;
            if(m==0){
                m1 = 59;
                h1--;
                if(h==0)
                    h1 = 23;
            }
        }
        return true;
    }
    else
        return false;
}
bool hople(int h, int m, int s){
    if(h>=0 && m>=0 && s>=0 && h<=24 && m<=59 && s<=59)
        return true;
    return false;
}