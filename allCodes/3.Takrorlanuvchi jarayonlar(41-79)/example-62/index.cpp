// 62. n ta butun sonlar ketma-ketligini kiriting. Hamma manfiy sonlar yig’indisini toping.
#include <iostream>
using namespace std;
int main()
{
    int n,s=0,i,a;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a<0)
        s+=a;
    }cout<<"yigindi="<<s;
    return 0;
}
 
