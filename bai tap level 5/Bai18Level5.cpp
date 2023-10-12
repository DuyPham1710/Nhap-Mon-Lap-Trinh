#include <iostream>
using namespace std;

void nhap(int &d, int &m, int &y);
bool hople(int d, int m, int y);
int soNgayTrongThang(int m, int y);
bool lanamnhuan(int y);
int tinh(int d, int m, int y, int &d1);
void xuat(int kq);

int main(){
	int d,m,y,d1;
	nhap(d,m,y);
	int kq = tinh(d,m,y,d1);
	xuat(kq);
	return 0;
}
void nhap(int &d, int &m, int &y){
	cin>>d>>m>>y; 
}
bool hople(int d, int m, int y){
	if(d>0 && m>0 && y>0 && m<=12 && d<=soNgayTrongThang(m,y))
		return true;
	return false;
}
int soNgayTrongThang(int m, int y){
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
int tinh(int d, int m, int y, int &d1){
	if(hople(d,m,y)){
		d1=d;
		for(int i=1; i<m; i++){
			d1=d1+soNgayTrongThang(i,y);
		}
		if(lanamnhuan(y))
			return 366-d1+1;
		else
			return 365-d1+1;
	}
	else
		return 0;
}
void xuat(int kq){
	if(kq==0)
		cout<<"khong hop le !"<<endl;
	else
		cout<<kq;
}
