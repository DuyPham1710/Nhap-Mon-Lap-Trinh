#include <iostream>
using namespace std;

int sochuso(int n);
long long tinh(int n);

int main(){
	int n;
	cin>>n;
	long long kq = tinh(n);
	cout<<kq;
	return 0;
}
int sochuso(int n){
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
long long tinh(int n){
	long long s = 1;
	long long t = 0;
	for (int i=1; i<=n; i++){
		if(sochuso(i)==1){
			s = i*10 +i;
			t = t+s;
		}
		if(sochuso(i)==2){
			s = i*100 +i;
			t = t+s;
		}	
		if(sochuso(i)==3){
			s = i*1000 +i;
			t = t+s;
		}	
		if(sochuso(i)==4){
			s = i*10000 +i;
			t = t+s;
		}	
	}
	return t;
}
