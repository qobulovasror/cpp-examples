// 52. Natural son berilgan. Berilgan sonning ikkilik sanoq sistemasi yozuvidagi birlar sonini aniqlang. Masalan, 13 sonining ikkilik yozuvi 3 ta birdan iboart (1101).
#include <iostream>
using namespace std;
int main()
{ int a,b,s=0;
    cout<<"natural son=";cin>>a;
    if(a>0){
    while(a!=0)
    {   b=a%2;
   if(b==1)  s++;
     a=a/2;
    }cout<<s;
    }else cout<<"natural son kirit";
    return 0;}
