#include <iostream>
using namespace std;
int tinh(int a, int b, int c);
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int kq = tinh(a,b,c);
	cout<<kq;
	return 0;
}
int tinh(int a, int b, int c){
	int dem = 0;
	if(a>0 && b>0 && c>0){
		while(a+b>c && a+c>b && b+c<=a){
			a--;
			dem++;
		}
		while(a+b>c && a+c<=b && b+c>a){
			b--;
			dem++;
		}
		while(a+b<=c && a+c>b && b+c>a){
			c--;
			dem++;
		}
		return dem;
	}
}
