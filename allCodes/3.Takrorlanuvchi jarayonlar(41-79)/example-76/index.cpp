// 76. Sonli yozuvida bir xil raqamlari bo’lmagan barcha uch xonali sonlarni o’sish tartibida chop qiling.
#include <iostream>
using namespace std;
int main()
{   int i,a1,a2,a3;
    for(i=100;i<=999;i++)
  { a1=i/100; a2=(i/10)%10;
    a3=i%10;
   if((a1!=a2)&&(a3!=a2)&&(a3!=a1))
    cout<<i<<","; }
    return 0; }
