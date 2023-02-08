// 7.  To’g’ri burchakli uchburchakning a va b katetlari berilgan. Uning gipotenuzasiga tushirilgan balandligini topish dasturini tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{   Float  a,b,h,c,S;
    cout<<"a-katet=";cin>>a;
    cout<<"b-katet=";cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    S=a*b; h=(2*S)/c;
    cout<<"balandligi="<<h;
    return 0; }
