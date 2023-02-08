// 23. OX o’qida uchta nuqta joylashgan: a, b, c. a ga  b yoki c nuqtadan qaysi biri yaqin joylashganligini aniqlang.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{   float a,b,c;
    cout<<"a nuqta=";cin>>a;
    cout<<"b nuqta=";cin>>b;
    cout<<"c nuqta=";cin>>c;
    if (abs(a-b)<abs(a-c))
    cout<<"a nuqtaga b nuqta yaqin joylashgan";
    else{ if(abs(a-b)==abs(a-c))
    cout<<"a nuqtaga ikkita nuqta bir xil masofada joylashgan";
    else cout<<"a nuqtaga c nuqta yaqin joylashgan";
    }return 0; }
