#include <iostream>
using namespace std;
int ToaDo(int x, int y);
int main(){
	int x,y;
	cin>>x>>y;
	int kq = ToaDo(x,y);
	cout<<kq;
	return 0;
}
int ToaDo(int x, int y){
	if(x>0 && y>0)
		return 1;
	if(x==0 && y==0)
		return 0;
	if(x<0 && y>0)
		return 2;
	if(x<0 && y<0)
		return 3;
	if(x>0 && y<0)
		return 4;
	if(x==0 && y!=0)
		return 6;
	if(x!=0 && y==0)
		return 5;	
}
