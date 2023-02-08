// 53. Ikkita natural son berilgan. Ularning eng katta umumiy bo’luvchisini toping.
#include <iostream>
using namespace std;
int main()
{   int a,b;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    while(a!=b)
    {     if(a>b)
     a=a-b;   if(b>a)
       b=b-a;
    }cout<<b;
    return 0;}
