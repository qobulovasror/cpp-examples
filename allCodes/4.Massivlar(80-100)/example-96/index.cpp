// 96. Butun sonli A(n) massivning k–elementini o’chiring.
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],k,i,n;
    cout<<"N=";cin>>n;
    cout<<"K=";cin>>k;
    for(i=1;i<=n;i++)
    {  cout<<i<<"-son=";
        cin>>A[i]; }
    for(i=1;i<n;i++)
    {  if(i<k)
            cout<<A[i]<<",";
    else
    { cout<<A[i+1]<<","; } }
    return 0;}
