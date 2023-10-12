#include <iostream>
using namespace std;

void nhap(float A[], int &n, float &x, float &y);
float lietketrongdoanxy(float A[], int n, float x, float y);
void xuat(float kq);

int main(){
	float A[1000];
	int n;
	float x,y;
	nhap(A,n,x,y);
	lietketrongdoanxy(A,n,x,y);
	return 0;
}
void nhap(float A[], int &n, float &x, float &y){
	cin>>n>>x>>y;
	for (int i=0; i<n; i++)
		cin>>A[i];
}
float lietketrongdoanxy(float A[], int n, float x, float y){
	for (int i=0; i<n; i++)
		if(x<=A[i] && A[i]<=y)
			xuat(A[i]);
}
void xuat(float kq){
	cout<<kq<<" ";
}
