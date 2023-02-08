// 95. Butun sonli massivning 0 dan kichik barcha elementlari ko‘paytmasini toping.
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],a=1,i,n;
    cout<<"N=";cin>>n;
    for(i=1;i<=n;i++)
    {  cout<<i<<"-son=";
        cin>>A[i];
        if(A[i]<0)
            a=a*A[i];
    }cout<<a;
    return 0;}
