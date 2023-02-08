// 54. n va m natural sonlar berilgan. Ularning eng kichik umumiy karralisini toping.
#include <iostream>
using namespace std;
int main()
{   int m,n,b,k,a,s=0;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    a=m*n; b=a-1;
    while(n!=m)
    {  if((b%m==0)&&(b%n==0))
        {   k=b;
            s++;}
        b--;
        if(b==0)
        break;
    } if(s==0)
    {  cout<<a; }
    if(s>0) cout<<k;
    return 0;  }
 
