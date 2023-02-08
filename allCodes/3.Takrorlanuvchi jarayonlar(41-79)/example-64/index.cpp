// 64. z sonidan katta bo’lgan 2, 4, 8, 16, … geometrik progressiyaning element raqamini aniqlashga dastur tuzing.
#include <iostream>
using namespace std;
int main()
{ int z,i=2,h=1;
    cout<<"z=";cin>>z;
    while(z>=i)
    {      i=i*2; h++;
    }cout<<h;
    return 0; }
