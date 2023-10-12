#include <iostream>
#include <math.h>
using namespace std;

int demsochuso(long long n);
int tongchuso(long long n);
int tim(long long n);

int main(){
	long long n;
	cin>>n;
	int kq = demsochuso(n);
	cout<<kq<<endl;
	int kq1 = tongchuso(n);
	cout<<kq1<<endl;
	int kq2 = tim(n);
	cout<<kq2;
	return 0;	
}
int tim(long long n){
	long long k = 1000;
	while(pow(2,k)>n){
		k--;
		if(k==-1)
			break;
	}
	if(k==-1)
        return -1;
    else
        return k;
}
int tongchuso(long long n){
	int a,t=0;
	while(n!=0){
		a=n%10;
		n=n/10;
		t = t + a;
	}
	return t;
}
int demsochuso(long long n){
	int a,dem=0;
	if(n==0)
		return 1;
	else{
		while(n!=0){
			a=n%10;
			n=n/10;
			dem++;
		}
		return dem;
	}
}
