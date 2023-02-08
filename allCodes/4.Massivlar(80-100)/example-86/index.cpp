// 86. Aniqlang:
// a)  massivning hamma elementlarini yig’indisini;
// b)  hamma elementlar ko’paymasini;

//86 a
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],i,s=0,n,a=0;
    cout<<"O'lchami=";cin>>n;
     for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i];
        a+=A[i];
    }  cout<<"yig'indi="<<a;
    return 0;}
 
//86 b
#include <iostream>
using namespace std;
int main()
{
    const int c=100;
    int A[c],i,s=0,n,a=1;
    cout<<"O'lchami=";cin>>n;
     for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i];
        a*=A[i];
    }  cout<<"ko'paytma="<<a;
    return 0;}
