// 13. Yuzasi berilgan kvadratga aylana ichki chizilgan. Bu aylanaga ichki chizilgan kvadrat yuzasini toping. Berilgan kvadrat yuzasidan ichki chizilgan kvadrat yuzasi necha marta kichik?
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S,A,r,a,y,x;
    const float pi=3.14;
    cout<<"Kvadrat yuzi=";cin>>S;
    A=sqrt(S);
    r=A/2;
    a=sqrt(2)*r;
    y=a*a;
    x=S/y;
    cout<<"ichki chizilgan kvadrat yuzi="<<a<<endl;
    cout<<"kvadrat yuzi ichki kvadrat yuzidan-"<<x<<"-marta kichik";
    return 0;
}