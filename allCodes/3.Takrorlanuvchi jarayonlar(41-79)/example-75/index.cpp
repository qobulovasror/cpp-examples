    // n≤27 natural son berilgan. Raqamlari yig’indisi n ga teng bo’lgan barcha uch xonali sonlar topilsin. 
#include <iostream>
using namespace std;
int main()
{  int i,n,m,a1,a2,a3;
    cout<<"28 dan kichik son=";
    cin>>n;
    for(i=100;i<=999;i++)
    {  a3=i%10;
        a2=(i/10)%10;
        a1=i/100;
        m=a1+a2+a3;
        if(n==m)
        cout<<i<<",";}
    return 0;}
