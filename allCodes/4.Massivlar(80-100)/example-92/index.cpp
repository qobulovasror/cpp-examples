// 92. Butun sonli massivning juft elementlari yig’indisini toping
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
    for(i=2;i<=n;i=i+2)
    {
        k=A[i]+k;
    }cout<<k;
    return 0;}
