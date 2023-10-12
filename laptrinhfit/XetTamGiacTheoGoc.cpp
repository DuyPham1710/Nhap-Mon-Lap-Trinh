#include <iostream>
using namespace std;

int xettamgiactheogoc(int a, int b);

int main(){
	int a,b;
	cin>>a>>b;
	int kq = xettamgiactheogoc(a,b);
	cout<<kq;
	return 0;
}
int xettamgiactheogoc(int a, int b){
    for(int c=1; c<180; c++){
        if(a==90 && b==45 && c==45 || b==90 & a==45 && c==45|| a==45 && b==45 && c==90){
            return 0;
        }
        if(a==90 && b<90 && c<90 && a+b+c==180 || b==90 && a<90 && c<90 && a+b+c==180 || a<90 && b<90 && c==90 && a+b+c==180){
            return 1;
        }
        if(a>90 && b<90  && c<90 && a+b+c==180 || b>90 && a<90 && c<90 && a+b+c==180 || a<90 && b<90 && c>90 && a+b+c==180){
            return 2;
        }
        if(a<90 && b<90 && c<90 && a+b+c==180){
            return 3;
        }
    }
}   
