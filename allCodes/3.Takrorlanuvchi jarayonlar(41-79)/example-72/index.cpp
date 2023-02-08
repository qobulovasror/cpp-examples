// 72. Barcha uch xonali tub sonlar topilsin.
#include <iostream>
using namespace std;
int main()
{   int i,p,j;
    bool t=false;
    for(i=100;i<=999;i++)
    {  for(j=2;j<i;j++)
    {   p=i%j;
    if(p>0)  t=true;
    else {
    t=false;  break;
    }    p=0;
    }if(t==true)
    cout<<i<<","; }
    return 0; }
