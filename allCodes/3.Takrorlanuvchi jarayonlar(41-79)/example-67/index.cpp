// 67. n sonining ko’paytirish jadvalini “ustun” shaklida chop eting (n ning qiymati klaviaturadan kiritiladi; 1≤n ≤9).
#include <iostream>
using namespace std;
int main()
{  int n,i,j;
    cout<<"n=";cin>>n;
    if((n>0)&&(n<10))
    {  for(j=1;j<=9;j++)
{ cout<<n<<"*"<<j<<"="<<n*j<<endl;}
    }else cout<<"son xato";
    return 0; }
