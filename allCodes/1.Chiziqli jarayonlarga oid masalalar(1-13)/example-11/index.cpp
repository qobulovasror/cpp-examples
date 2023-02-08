// 11. Tomonlari a, b, c, bo’lgan uchburchakka ichki chizilgan aylananing yuzasini topish dasturini tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,p,Su,r,Sd;
    const float pi=3.14;
    cout<<"a tomon=";cin>>a;
    cout<<"b tomon=";cin>>b;
    cout<<"c tomon=";cin>>c;
    p=(a+b+c)/2;
    r=sqrt(((p-a)*(p-b)*(p-c))/p);
    //Su=sqrt(p*(p-a)*(p-b)*(p-c));
    //r=(2*Su)/(p*2);
    Sd=pi*r*r;
    cout<<"doira yuzasi="<<Sd;
    return 0;
}
