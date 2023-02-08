// 85. Massiv berilgan. Uning hamma elementlarini:
// a)  ikki martaga oshiring;
// b)  a soniga kamaytiring;

//85 a
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],i,s=0,n;
    cout<<"O'lchami=";cin>>n;
    for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i];
        A[i]=A[i]*2;
    }  for(i=0;i<n;i++)
       {   cout<<A[i]<<endl; }
    return 0;}
 
//85 b
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],i,s=0,n,a;
    cout<<"O'lchami=";cin>>n;
    cout<<"a=";cin>>a;
    for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i];
        A[i]=A[i]-a;
    }  for(i=0;i<n;i++)
       {   cout<<A[i]<<endl; }
    return 0;}
