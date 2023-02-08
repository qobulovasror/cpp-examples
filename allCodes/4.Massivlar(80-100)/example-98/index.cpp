// 98. a1, a2, …, an musbat butun sonlar berilgan. Uning ichidan, qandaydir m sonining kvadrati hisoblanuvchini toping.
#include <iostream>
using namespace std;
int main()
{
    const int s=100;
    int A[s],m,c,i,n;
    cout<<"N=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++)
    {  cout<<i<<"-son=";
        cin>>A[i];
        if(A[i]<=0)
        {
          break;
          cout<<"son xato";
        }
        if(A[i]==m)
            c=i*i;
    } cout<<c;
    return 0;
    }
