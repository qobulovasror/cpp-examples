// 77. m va n natural sonlar berilgan. n dan kichik va m bilan o’zaro tub bo’lgan barcha natural sonlarni toping.
#include <iostream>
using namespace std;
int main()
{  int n,m,a,b,i;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=2;i<n;i++)
    { a=i;b=m;
    if(a>b)
        a=a-b;
    if(b>a)
        b=b-a;
        if(a==1||b==1)
        cout<<i<<",";}
    return 0;
}
