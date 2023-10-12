#include <iostream>
using namespace std;
int kiemtramau(int x, int y);
int main(){
	int x,y;
	cin>>x>>y;
	int kq = kiemtramau(x,y);
	cout<<kq;
	return 0;
}
int kiemtramau(int x, int y){
	int A=1, B=2, AB=4, O=8;
	int t = 0;
	if(x==A){
		if(y==A)
			t = A + O;
		else
			if(y==B)
				t = A + B + AB + O;
			else
				if(y==AB)
					t = A + B + AB;
				else
					if(y==O)
						t = A + O;
	}
	if(x==B){
		if(y==A)
			t = A + B + AB + O;
		else
			if(y==B)
				t = B + O;
			else
				if(y==AB)
					t = A + B + AB;
				else
					if(y==O)
						t = B + O;
	}
	if(x==AB){
		if(y==A)
			t = A + B + AB;
		else
			if(y==B)
				t = A + B + AB;
			else
				if(y==AB)
					t = A + B + AB;
				else
					if(y==O)
						t = A + B;
	}
	if(x==O){
		if(y==A)
			t = A + O;
		else
			if(y==B)
				t = B + O;
			else
				if(y==AB)
					t = A + B;
				else
					if(y==O)
						t = O;
	}
	return t;
}
