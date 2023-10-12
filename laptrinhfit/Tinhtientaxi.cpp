#include <iostream>
using namespace std;
int tinhtientaxi(double x);
int main(){
	double x;
	cin>>x;
	int kq = tinhtientaxi(x);
	cout<<kq;
	return 0;
}
int tinhtientaxi(double x){
	int tien;
	if(x<=0.7){
		tien = 12500;
	}
	else{
		if(x>0.7 && x<=30.7){
			if(x-0.7==int(x))
				tien = 12500 + int(x)*17000;
			else
				tien = 12500 + int(x-0.7)*17000 + 17000;
		}
		else{
			if(x>30.7){
				if(x-0.7==int(x))
					tien = 12500 + 17000*30 + 14000*(x-30.7);
				else
					tien = 12500 + 17000*30 + 14000*int(x-30.7) + 14000;
			}
		}
	}
	return tien;
}
