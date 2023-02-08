// 93. Butun sonli massivning 9 ga karrali elementlari ko’paytmasini  toping
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int k=1,A[c],i,n;
    cout<<"N=";cin>>n;
    for(i=1;i<=n;i++)
    {  cout<<i<<"-son=";
        cin>>A[i];
        if(A[i]%9==0)
            k=k*A[i];
    }cout<<k;
    return 0;}
