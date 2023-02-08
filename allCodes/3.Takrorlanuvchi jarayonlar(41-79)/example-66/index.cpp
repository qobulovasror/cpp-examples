// 66. Natural son, uning barcha bo’luvchilarini 1 ni ham qo’shganda yig’indisi o’ziga teng bo’lsa mukammal deb yuritiladi. Masalan, 6=1+2+3. Berilgan N sonidan kichik mukammal sonlarni toping.
#include <iostream>
using namespace std;
int main()
{  int j,i,n,s=0,p=0;
    cout<<"n=";cin>>n;
    for(i=1;i<n;i++)
    {  for(j=1;j<i;j++)
        { if(i%j==0) s=s+j;
        }if(s==i)
    p++; s=0;
    }cout<<"P="<<p;
    return 0; }
