// 43. 1 dan 100 gacha bo’lgan sonlar ichida nechta toq son borligini aniqlash dasturini tuzing.
#include <iostream>
using namespace std;
int main()
{ int i,s=0;
    for(i=1;i<=100;i++)
    {if(i%2==1) {s++;}
    }cout<<s;return 0;}
