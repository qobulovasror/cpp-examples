// 88. a1,a2,… ,an haqiqiy sonlar ketma-ketligi berilgan. Ular o’sish tartibida ekanligini aniqlang.
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],i,n;bool t=true;
    cout<<"n=";cin>>n;
     for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(A[i]<=A[i+1])
            t=true;
        else {
            t=false;
            break;}
    } if(t==true)
        cout<<"o'sish tartibida";
        else cout<<"o'sish tartibida emas";
    return 0;}
 
