// 49. 20 dan 500 gacha sonlar orasida nechta son 5 ga qoldiqsiz bo’linishini aniqlash dasturini tuzing.
#include <iostream>
using namespace std;
int main()
{ int i,s=0;
    for(i=20;i<200;i++)
    {if(i%5==0)s++;
    }cout<<s;return 0;}
