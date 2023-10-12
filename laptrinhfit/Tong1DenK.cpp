#include <iostream>
using namespace std;
long long tim(long long n);
int main(){
	long long n;
	cin>>n;
	long long kq = tim(n);
	cout<<kq;
	return 0;
}
long long tim(long long n){
	long long k = 0;
	long long t = 0;
	if(n==2)
		return 1;
	for (long long i=1; i<n; i++){
		t = t + i;
		if(t>=n){
			k = i-1;
			break;
		}
	}
	return k;
}
