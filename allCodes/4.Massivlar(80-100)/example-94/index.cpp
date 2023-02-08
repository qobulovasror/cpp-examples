// 94. Haqiqiy sonli massivdan toq nomerdagi elementlar yig’indisini toping
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    float A[c],a=0;
    int i,n;
    cout<<"N=";cin>>n;
    for(i=1;i<=n;i++)
    {  cout<<i<<"-son=";
        cin>>A[i];
        if(i%2==1)
            a=a+A[i];
    }cout<<a;
    return 0;}
