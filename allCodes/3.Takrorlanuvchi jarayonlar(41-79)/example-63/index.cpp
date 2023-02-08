// 63. 2, 5, 8, 11, ... arifmetik progressiyaning 10 ta hadining ko’paytmasini va yig’indisini hisoblang.
#include <iostream>
using namespace std;
int main()
{  int i,k=1,y=0;
    for(i=2;i<=29;i=i+3)
    {   y=y+i; k=k*i;
        //k=2*5*8*11*14*17*20*23*26*29;}
    cout<<"yig'indi="<<y<<endl;
    cout<<"ko'paytma="<<k;
    return 0;
}
 
