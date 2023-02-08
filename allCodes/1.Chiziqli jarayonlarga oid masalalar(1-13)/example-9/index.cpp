// 9.  Uchburchakning a, b, c tomonlari berilgan. Ushbu uchburchakning barcha medianalarini topish dasturini tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{   float a,b,c,ma,mb,mc;
    cout<<"a tomon=";cin>>a;
    cout<<"b tomon=";cin>>b;
    cout<<"c tomon=";cin>>c;
    if((a>0)&&(b>0)&&(c>0)){
    ma=(0.5)*sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2));
    mb=(0.5)*sqrt(2*(a*a+c*c)-b*b);
    mc=(0.5)*sqrt(2*(b*b+c*c)-c*c);
    cout<<"a tomon tushgan median="<<ma<<endl;
    cout<<"b tomon tushgan median="<<mb<<endl;
    cout<<"c tomon tushgan median="<<mc;}
    else cout<<"mavjut emas";
    return 0; }
