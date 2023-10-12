#include <iostream>
using namespace std;

int thangnamthoaman(int m, int y);
bool lanamnhuan(int y);
int NgayTiepTheo(int d, int m, int y);

int main(){
	int d,m,y;
	cin>>d>>m>>y;
	int kq = NgayTiepTheo(d,m,y);
	cout<<kq;
	return 0;
}
int thangnamthoaman(int m, int y){
	switch(m){
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if(lanamnhuan(y))
				return 29;
			else
				return 28;
		default: return 31;
			break;
	}
}
bool lanamnhuan(int y){
	if((y%4==0 && y%100!=0) || (y%400==0))
		return true;
	return false;
}
int NgayTiepTheo(int d, int m, int y){
	if(d>0 && d<=thangnamthoaman(m,y) && m>0 && m<=12 && y>0){
		if(lanamnhuan(y)){
			if(m==2){
				if(d==29)
					return 1;
				else
					return d+1;	
			}
		}
		if(thangnamthoaman(m,y)==28){
			if(d==28)
				return 1;
			else
				return d+1;
		}
		if(thangnamthoaman(m,y)==30){
			if(d==30)
				return 1;
			else
				return d+1;
		}
		if(thangnamthoaman(m,y)==31){
			if(d==31)
				return 1;
			else
				return d+1;
		}
	}
	else
		return 0;
}
