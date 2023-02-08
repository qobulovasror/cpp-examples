// 79. Yozuvida bir xil raqamlar bo’lmagan barcha to’rt xonali sonlarni ekranga chiqaring.
#include <iostream>
using namespace std;
int main()
{  int i,a1,a2,a3,a4;
    for(i=1000;i<9999;i++)
    {  a4=i%10;
        a3=(i/10)%10;
        a2=((i/10)/10)%10;
        a1=i/1000;
        if(a4!=a3&&a4!=a2&&a4!=a1) {
    if(a3!=a2&&a3!=a1&&a2!=a1){
    cout<<i<<",";
    } } }
    return 0;}
