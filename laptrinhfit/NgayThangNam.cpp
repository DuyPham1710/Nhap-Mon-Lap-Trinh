#include <iostream>
using namespace std;

int SoNgayTrongThang(int m, int y);
bool lanamnhuan(int y);
bool Hople(int d, int m, int y);
int Quy(int m);
void xuatquy(int x);
int dmytieptheo(int d, int m, int y, int &d1, int &m1, int &y1);
void xuatngaytieptheo(int d, int m, int y);
void dmytruocdo(int d, int m, int y, int &d1, int &m1, int &y1);

int main(){
	int d,m,y;
	cin>>d>>m>>y;
	if(Hople(d,m,y)){
		cout<<"HOP LE"<<endl;
		int x = Quy(m);
		xuatquy(x);
		int x1 = SoNgayTrongThang(m,y);
		cout<<x1<<endl;
		int d1,m1,y1;
		dmytieptheo(d,m,y,d1,m1,y1);
		xuatngaytieptheo(d1,m1,y1);
		int d2,m2,y2;
		dmytruocdo(d,m,y,d2,m2,y2);
		xuatngaytieptheo(d2,m2,y2);
	}
	else
		cout<<"KHONG HOP LE";
	return 0;
}
void dmytruocdo(int d, int m, int y, int &d1, int &m1, int &y1){
	d1 = d-1;
	m1 = m;
	y1 = y;
	if(SoNgayTrongThang(m,y)==31 && m!=3){
		if(d==1){
			if(m==1){
				d1=31;
				m1=12;
				y1--;
			}
			else{
				d1=31;
				m1--;
			}
		}
	}
	if(SoNgayTrongThang(m,y)==30){
		if(d==1){
			d1=30;
			m1--;
		}
	}
	if(m==3){
		if(lanamnhuan(y)){
			if(d==1){
				d1=29;
				m1--;
			}
		}
		else{
			if(d==1){
				d1=28;
				m1--;
			}
		}
	}
}
void xuatngaytieptheo(int d, int m, int y){
	cout<<d<<" "<<m<<" "<<y<<endl;
}
int dmytieptheo(int d, int m, int y, int &d1, int &m1, int &y1){
	d1 = d+1;
	m1 = m;
	y1 = y;
	if(SoNgayTrongThang(m,y)==31){
		if(d==31){
			if(m==12){
				d1=1;
				m1=1;
				y1=y1+1;
			}
			else{
				d1=1;
				m1=m1+1;
			}
		}
	}
	if(SoNgayTrongThang(m,y)==30){
		if(d==30){
			d1=1;
			m1=m1+1;
		}
	}
	if(lanamnhuan(y)){
		if(SoNgayTrongThang(m,y)==29){
			if(d==29){
				d1=1;
				m1=m1+1;
			}
		}
	}
	else{ 
		if(SoNgayTrongThang(m,y)==28){
			if(d==28){
				d1=1;
				m1=m1+1;	
			}
		}
	}
}
int Quy(int m){
	if(m==1 || m==2 || m==3)
		return 1;
	else
		if(m==4 || m==5 || m==6)
			return 2;
		else
			if(m==7 || m==8 || m==9)
				return 3;
			else
				return 4;
}
void xuatquy(int x){
	cout<<x<<endl;
}
int SoNgayTrongThang(int m, int y){
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
bool Hople(int d, int m, int y){
	if(d>0 && d<=SoNgayTrongThang(m,y) && m>0 && m<=12 && y>0)
		return true;
	return false;
}
