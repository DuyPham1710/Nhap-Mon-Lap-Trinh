#include <iostream>
#include <math.h>
using namespace std;

void TongKet(int k, double x, double y);

int main(){
	int k;
	double x,y;
	cin>>k>>x>>y;
	TongKet(k,x,y);
	return 0;
}
void TongKet(int k, double x, double y){
	double t = (x+y)/2;
	t = round(t*10)/10;
	if(k==21){
		if(t>=4.0)
			cout<<"Pass";
		else
			cout<<"Fail";
	}
	else{
		if(t>=5.0)
			cout<<"Pass";
		else
			cout<<"Fail";
	}
}
