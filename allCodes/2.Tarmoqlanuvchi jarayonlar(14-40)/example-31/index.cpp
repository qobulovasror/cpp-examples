// 31. Ikki xonali son berilgan. Uning raqamlari kublari yig’indisining to’rtlanganligi sonning kvadratiga tengligini aniqlang. Masalan, 48 soni uchun javob o’rinli, 52 soni uchun o’rinsiz.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ int a,n2,n1,x,a1;
   cout<<"a=";cin>>a;
   if((a>9)&&(a<=99))
   {n2=a%10;n1=a/10;
    x=(4*((pow(n2,3))+(pow(n1,3))));
    a1=pow(a,2);
    if(a1==x){cout<<"teng jumla rost";}
    else cout<<"jumla yolg'on-xato";
    }else cout<<"son xato";
    return 0;}
