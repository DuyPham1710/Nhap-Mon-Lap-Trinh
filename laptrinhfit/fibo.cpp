#include <iostream>
using namespace std;
long long fibo(long long n);
int main(){
	long long n;
	cin>>n;
	long long kq = fibo(n);
	cout<<kq;
	return 0;
}
long long fibo(long long n){
	long long f0 = 0, f1 = 1;
	long long fn = 0;
	for(int i=0; i<n; i++){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	return fn;
}
