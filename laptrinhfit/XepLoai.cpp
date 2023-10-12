#include <iostream>
using namespace std;

int XepLoai(int x, int y);

int main(){
	int x,y;
	cin>>x>>y;
	int kq = XepLoai(x,y);
	cout<<kq;
	return 0;
}
int XepLoai(int x, int y){
	double t = double(x+y)*0.5;
	int tien = 4*235000;
	if(t>=8.0 && x>=7 && y>=7){
		return 1;
	}
	if((t>=6.5 && t<8.0 && x>=6 && y>=6) || (t>=8.0 && x<7 && y<7) || (t>=8.0 && x>=7 && y<7) || (t>=8.0 && x<7 && y>=7)){
		return 2;
	}
	if((t<6.5 && t>=5.0) || (t<8.0 && t>=6.5 && x<6 && y<6) || (t<8.0 && t>=6.5 && x>=6 && y<6) || (t<8.0 && t>=6.5 && x<6 && y>=6)){
		return 3;
	}
	if(t<5.0){
		return tien;
	}
}
