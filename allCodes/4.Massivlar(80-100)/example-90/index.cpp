// 90. N ta haqiqiy sonli ketma-ketlik berilgan. Ularning ichida K dan kichik, K ga teng va K dan katta sonlar qanchaligini aniqlang.
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    float A[c];
    int k,i,n,ki=0,ka=0,te=0;
    cout<<"N=";cin>>n;
    cout<<"K=";cin>>k;
     for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i]; }
    for(i=0;i<n-1;i++)
    {  if(A[i]<k)
            ki++; else
        { if(A[i]==k) te++;
            else ka++;}
    }cout<<"kichiklari="<<ki<<endl;
    cout<<"tenglari="<<te<<endl;
    cout<<"kichiklari="<<ki;
    return 0;}
