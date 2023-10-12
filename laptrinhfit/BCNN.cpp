#include <iostream>
using namespace std;

int timmax(int x, int y);
int BCNN(double x, double y);

int main(){
	double x,y;
	cin>>x>>y;
	int kq = BCNN(x,y);
	cout<<kq;
	return 0;	
}
int timmax(int x, int y){
	if(x>y)
		return x;
	else
		return y;
}
int BCNN(double x, double y){
	int a = int(x);
	int b = int(y);
	int z = a*b;
	int max = timmax(a,b);
	for(int i=max; i<z; i++)
		if(i%a==0 && i%b==0)
			return i;
	
}
