#include <iostream>
using namespace std;
int TinhTienDien(int n);
int main(){
	int n;
	cin>>n;
	int kq = TinhTienDien(n);
	cout<<kq;
	return 0;
}
int TinhTienDien(int n){
	int tien = 0;
	if(n<=48)
		tien = 600*n;
	else
		if(n>=49 && n<=96)
			tien = 600*48 + 1004*(n-48);
		else
			if(n>=97 && n<=144)
				tien = 600*48 + 1004*48 + 1214*(n-96);
			else
				if(n>=145)
					tien = 600*48 + 1004*48 + 1214*48 + 1594*(n-144);
	return tien;
}
