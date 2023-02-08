// 97. a1, a2, …, an haqiqiy sonlar ketma-ketligi berilgan. Uning [c;d] kesmada yotgan elementlarini ko’rsating
#include <iostream>
using namespace std;
int main()
{
    const int s=100;
    int A[s],c,d,i,n;
    cout<<"N=";cin>>n;
    cout<<"c=";cin>>c;
    cout<<"d=";cin>>d;
    if(c<d){
    for(i=1;i<=n;i++)
    {  cout<<i<<"-son=";
        cin>>A[i];
    }
    for(i=1;i<=n;i++)
    {
         if(A[i]>c&&A[i]<d)
        cout<<i<<"-element="<<A[i]<<endl;
    }}else cout<<"xato";
    return 0; }
