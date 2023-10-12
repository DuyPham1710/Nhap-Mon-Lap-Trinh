#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &d, int &m, int &y, int &d1, int &m1, int &y1);
int songaytrongthang(int m, int y);
bool lanamnhuan(int y);
int tinhsongaytudaunam(int d, int m, int y);
int khoangcachgiua2ngay(int d, int m, int y, int d1, int m1, int y1);
void xuat(int kq);

int main(){
	int d,m,y,d1,m1,y1;
	nhap(d,m,y,d1,m1,y1);
	int kq = khoangcachgiua2ngay(d,m,y,d1,m1,y1);
	xuat(kq);
	return 0;
}
void nhap(int &d, int &m, int &y, int &d1, int &m1, int &y1){
	cin>>d>>m>>y;
	cin>>d1>>m1>>y1;
}
int songaytrongthang(int m, int y){
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
	if(y%4==0 && y%100!=0 || y%400==0)
		return true;
	return false;
}
int tinhsongaytudaunam(int d, int m, int y){
		int x = d;
		for(int i=1; i<m; i++){
		x = x + songaytrongthang(i,y);
		}
		return x;
}
int tinhsongay(int d, int m, int y){
	int kc = 0;
	for (int i=1; i<y; i++)
		if(lanamnhuan(i))
			kc = kc + 366;
		else
			kc = kc + 365;
	kc = kc + tinhsongaytudaunam(d,m,y);
	return kc;
}
int khoangcachgiua2ngay(int d, int m, int y, int d1, int m1, int y1){
	int kc1 = tinhsongay(d,m,y);
	int kc2 = tinhsongay(d1,m1,y1);
	int songay = abs(kc1 - kc2);
	return songay; 
}
void xuat(int kq){
	cout<<kq;
}
