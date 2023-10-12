#include <iostream>
using namespace std;

int SoTapCon(int n);

int main(){
	int n;
	cin>>n;
	int kq = SoTapCon(n);
	cout<<kq;
	return 0;
}
int SoTapCon(int n){
	int dem = 0;
	int t = 0;
	int A[100],nA = 0;
	for(int i=1; i<=n; i++){
		A[nA++] = i;
		t = t + A[nA];
	}
	if(t%2!=0){
			return 0;
		}
	else{
		t = t/2;
	}
	return dem;
}