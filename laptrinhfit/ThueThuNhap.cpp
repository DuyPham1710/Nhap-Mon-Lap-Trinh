#include <iostream>
#include <math.h>
using namespace std;
long ThueThuNhap(int x);
int main(){
	int x;
	cin>>x;
	long kq = ThueThuNhap(x);
	cout<<kq;
	return 0;
}
long ThueThuNhap(int x){
	double thue;
	if(x<=5000000)
		thue = (double)x*0.05;
	else{
		thue = (double)5000000*0.05;
		if(x>5000000 && x<=10000000)
			thue += (double)(x-5000000)*0.1;
		else{
			thue += (double)(10000000-5000000)*0.1;
			if(x>10000000 && x<=18000000)
				thue += (double)(x-10000000)*0.15;
			else{
				thue += (double)(18000000-10000000)*0.15;
				if(x>18000000 && x<=32000000)
					thue += (double)(x-18000000)*0.2;
				else{
					thue += (double)(32000000-18000000)*0.2;
					if(x>32000000 && x<=52000000)
						thue += (double)(x-32000000)*0.25;
					else{
						thue += (double)(52000000-32000000)*0.25;
						if(x>52000000 && x<=80000000)
							thue += (double)(x-52000000)*0.3;
						else{
							thue += (double)(80000000-52000000)*0.3;
							if(x>80000000)
								thue += (double)(x-80000000)*0.35;
						}
					}
				}
			}
		}
	}
	long kq = round(thue*12);
	return kq;
}
