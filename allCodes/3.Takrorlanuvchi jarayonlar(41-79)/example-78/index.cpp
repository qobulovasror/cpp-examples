// 78. “Al-Xorazmiy masalasi”. 10 sonini kvadratlarining yig’inidisi 58 ga teng bo’lgan ikkita qo’shiluvchilarga ajrating.

#include <iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    for(i=1;i<10;i++)
    { for(j=1;j<10;j++)
    { a=i+j;
        b=i*i+j*j;
        if(a==10&&b==58)
    cout<<i<<","<<j<<endl;} }
    return 0;
}
