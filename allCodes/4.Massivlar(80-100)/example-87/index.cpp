// 87. a1,a2,… ,an butun sonlar ketma-ketligi berilgan. Oldin musbat yoki manfiy sonlardan qaysi biri oldin kelishini aniqlang.
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],i,n;
    cout<<"O'lchami=";cin>>n;
     for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i];
    } if(A[0]>0)
        cout<<"musbat oldin";
        else cout<<"manfiy oldin";
    return 0;}
