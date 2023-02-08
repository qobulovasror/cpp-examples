// 70. Oxiri 0 bilan tugaydigan natural sonlar ketma-ketligi berilgan. Ushbu ketma-ketlikdagi katta element tartib nomerini izlash dasturini tuzing.

#include <iostream>
using namespace std;
int main()
{  int n,s=0,p,max=0;
    while(n!=0)
    {cout<<s+1<<"-had=";cin>>n;
    s++; if(n>max)
    {max=n; p=s;
    } if(n==0)
    break;
    }cout<<"max="<<p<<"-had";
    return 0;}
