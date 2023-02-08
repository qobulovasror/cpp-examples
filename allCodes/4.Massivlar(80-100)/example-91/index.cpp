// 91. N ta butun sonlar ketma-ketligi berilgan. Tartib nomeri o’zining qiymatiga mos keladigan massiv elementlarini yig’indisini hisoblang.
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int k=0,A[c],i,n;
    cout<<"N=";cin>>n;
    for(i=1;i<=n;i++)
    {  cout<<i<<"-son=";
        cin>>A[i]; }
    for(i=1;i<=n;i++)
    {  if(A[i]==i)
        k=k+A[i];
    }cout<<k;
    return 0;}
 
