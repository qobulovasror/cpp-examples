// 61. 1<n<100 sonlar ichidan, ularning yig’indisi ularning ko’paytmasiga teng bo’lgan barcha sonlar juftligini toping.
#include <iostream>
using namespace std;
int main()
{  int n,i,s=0,a,b;
    for(i=1;i<100;i++)
    {  for(n=1;n<100;n++)
        {  a=n+i;
            b=n*i;
            if(a==b)
            cout<<n<<','<<i<<endl;
        }a=0,b=0;
    }//cout<<s;
    return 0;}
