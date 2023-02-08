// 30. Insonning tug’ilgan yili va oyining nomeri, yana bugungi kun yil va oyning nomeri ma’lum (yanvar – 1 va h.k.). Inson yoshini aniqlang (to’liq yillar sonida). Ko’rsatilgan oylar mos tushgan holda, to’liq yil o’tgan deb hisoblanadi.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{  int x1,x2,y1,y2,a1,a2;
    cout<<"Tug'ilgan yil=";cin>>x1;
    cout<<"Tug'ilgan oy=";cin>>y1;
    cout<<"Hozirgi yil=";cin>>x2;
    cout<<"Hozirgi oy=";cin>>y2;
    a1=x2-x1;  a2=y2-y1;
    if((a1>0)&&(a2>0)&&(a2>12))
   cout<<a1<<"-yoshga tuldingiz";
    else{if((a1>0)&&(a2<0)&&(a2>-12))
    cout<<a1<<"-yoshga tushingizga "<<abs(a2)<<"-oy bor";
    else cout<<"xato kiritilgan";}
    return 0;}
