// 71. Pifagorning a, b, c sonlari dastur-generatorini tuzing. Asosi formuladan iborat bo’lsin. Ekranga 5 ustunli jadval ko’rinishidagi natija chiqarilsin.
#include <iostream>
using namespace std;
int main()
{   int i,p,j;
    bool t=false;
    for(i=100;i<=999;i++)
    {  for(j=2;j<i;j++)
    {   p=i%j;
    if(p>0)  t=true;
    else {
    t=false;  break;
    }    p=0;
    }if(t==true)
    cout<<i<<","; }
    return 0; }
