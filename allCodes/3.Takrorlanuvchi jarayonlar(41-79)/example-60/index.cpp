// 60. S=1+2+3+…+n yig’indini hisoblash dasturini tuzing.
#include <iostream>
using namespace std;
int main()
{ int a=0,s=0,b,i=2,n,j;
    cout << "n="; cin>>n;
    while(i<=n)
    { j=1;
        while(j<=i)
        { if(i%j==0)
          { s=s+j; }
          j++; }
    if(a<s)
    { a=s; b=i; s=0;}
    else s=0;
    i++;
    } cout<<"x= "<<b;
    return 0; }
