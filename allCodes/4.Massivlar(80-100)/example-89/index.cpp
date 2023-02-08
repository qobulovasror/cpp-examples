// 89. a1,a2,… ,an butun sonlar berilgan. Faqat ai≥i shartni qanoatlantiruvchi sonlarni chop qiling.
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],i,n;bool t=true;
    cout<<"n=";cin>>n;
     for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i]; }
    for(i=0;i<n-1;i++)
    {   if(A[i]>=i)
            cout<<A[i]<<",";
    }   return 0;}
 
