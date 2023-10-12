#include <iostream>
using namespace std;
long long tinh(long long n, long long t, long long p);
int xuly(long long n, long long t, long long p);
int main(){
	long long n,t,p;
	cin>>n>>t>>p;
	long long kq = tinh(n,t,p);
	cout<<kq<<" ";
	int dem = xuly(n,t,p);
	cout<<dem;
	return 0;
}
long long tinh(long long n, long long t, long long p){
	long long tien = 0;
	if(n<5){
		tien = p*n;
	}
	else if(n>=5 && n<=10){
		tien = n*p - (n*p*0.05);
	}
	else if(n>=11 && n<=20){
		tien = n*p - (n*p*0.1);
	}
	else if(n>=21){
		tien = n*p - (n*p*0.15);
	}
	return tien;
}
int xuly(long long n, long long t, long long p){
	if(t==3 || t==4)
		return n/10;
    else
	    return 0;
}
