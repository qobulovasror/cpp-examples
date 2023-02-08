// 68. n natural soni berilgan. Hisoblang: S=1-(1/2)+ ... +(-1)(1/n)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,n,m=1,p;
    float s=0;
    cout<<"n=";cin>>n;
    p=pow(2,n);
    for(i=1;i<=p;i=i*2)
    {
        s=s+pow((-1),m)*(1/i);m++;
    }cout<<s;
    return 0; }
