#include <iostream>
using namespace std;
int beauty(int a, int b);
int main(){
	int a,b;
	cin>>a>>b;
	int kq = beauty(a,b);
	cout<<kq;
	return 0;
}
int beauty(int a, int b){
	int dem = 0;
	int tam = 0;
	for (int i=a; i<=b; i++){
		for (int j=1; j<=i; j++){
			if(i%j==0)
				tam++;
		}
		if(tam==3)
			dem++;
		tam = 0;
	}
	return dem;
}
