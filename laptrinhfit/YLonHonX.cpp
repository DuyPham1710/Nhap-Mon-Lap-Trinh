#include <bits/stdc++.h>
using namespace std;
int tinh(double x);
int main(){
    double x;
    cin>>x;
    int kq = tinh(x);
    cout<<kq;
 	return 0;
}
int tinh(double x){
	if(x==int(x)){
		x = abs(x);
   		if(int(x)%2!=0)
    		return x;
    	else{
    		x +=1;
    		return x;
		}
	}
	else{
	    int y = int(abs(x));
	    if(y%2!=0){
	        y = y+2;
	        return y;
	    }
	    if(y%2==0){
	    	y = y+1;
	        return y;
		}
	}
}
