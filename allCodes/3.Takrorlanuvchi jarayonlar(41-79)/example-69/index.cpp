// 69. n natural soni va a haqiqiy soni berilgan. P=a(a+1)…(a+n-1) ni hisoblang.
// n ta sondan eng kattasini topuvchi dasturni tuzing.

#include <iostream>
using namespace std;
int main()
{   int i,n,P=1;
    float a;
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;
    for(i=1;i<n;i++)
    {
        P=P*a*(a+i);
    }cout<<P;
    return 0; }
