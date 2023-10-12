#include <iostream>
#define MAX 100
using namespace std;

void nhap(int A[][MAX], int &m, int &n);
bool lasoNT(int x);
void timvitrisoNT(int A[][MAX], int m, int n);
void xuat(int x, int y);

int main(){
	int A[MAX][MAX],m,n;
	nhap(A,m,n);
	timvitrisoNT(A,m,n);
	return 0;
}
void nhap(int A[][MAX], int &m, int &n){
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>A[i][j];
}
bool lasoNT(int x){
	int dem = 0; 
	for (int i=1; i<=x; i++)
		if(x%i==0)
			dem++;
	if(dem==2)
		return true;
	return false;
}
void timvitrisoNT(int A[][MAX], int m, int n){
	int x = 0;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if(lasoNT(A[i][j])){
				x++;
				xuat(i,j);
				break;
			}
		}
		if(x==1)
		break;
	}
}
void xuat(int x, int y){
	cout<<x<<y<<" ";
}
