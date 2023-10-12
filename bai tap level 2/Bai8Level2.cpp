#include <iostream>
using namespace std;

void nhap(int &n);
int write(int n);
void xuat(int kq);

int main()
{
    int n;
    nhap(n);
    int kq = write(n);
    xuat(kq);
    return 0;
}
void nhap(int &n)
{
    cin >> n;
}
int write(int n)
{
    switch (n)
    {
    case 0: return 1;
    case 1: return 2;
    case 2: return 3;
    case 3: return 4;
    case 4: return 5;
    case 5: return 6;
    case 6: return 7;
    case 7: return 8;
    case 8: return 9;
    case 9: return 10;
    default: return 0;
    }
}
void xuat(int kq)
{
    if(kq==0)
        cout << "khong biet viet";
    else
        if(kq==1)
            cout << "so khong";
        else
            if(kq==2)
                cout << "so mot";
            else
                if(kq==3)
                    cout << "so hai";
                else
                    if(kq==4)
                        cout << "so ba";
                    else
                        if(kq==5)
                            cout << "so bon";
                        else
                            if(kq==6)
                                cout << "so nam";
                            else
                                if(kq==7)
                                    cout << "so sau";
                                else
                                    if(kq==8)
                                        cout << "so bay";
                                    else
                                        if(kq==9)
                                            cout << "so tam";
                                        else
                                            if(kq==10)
                                                cout << "so chin";

}
