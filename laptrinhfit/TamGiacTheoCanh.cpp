#include <iostream>
using namespace std;
int xettamgiac(int a, int b, int c);
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int kq = xettamgiac(a,b,c);
	cout<<kq;
	return 0;
}
int xettamgiac(int a, int b, int c){
	if(a>0 && b>0 && c>0 && b+c>a && a+c>b && a+b>c){
		if(a==b && b==c && a==c)
			return 0;
		if(a==b || b==c || a==c)
			return 1;
		else
			if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
				return 2;
			else
				return 3;
	}
	else
		return 4;		
}
