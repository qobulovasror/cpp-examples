// 37. Ikkita nuqta berilgan: A(x1,y1) va B(x2, y2). Bu nuqtalardan qaysinisi koordina boshiga yaqin joylashganligini aniqlaydigan algoritm tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ float x1,y1,x2,y2;
    cout<<"A ning koordinatasi"<<endl;
    cout<<"x1=";cin>>x1;
    cout<<"y1=";cin>>y1;
    cout<<"B ning koordinatasi"<<endl;
    cout<<"x2=";cin>>x2;
    cout<<"y2=";cin>>y2;
    if(sqrt(pow(x1,2)+pow(y1,2))>sqrt(pow(x2,2)+pow(y2,2)))
    cout<<"A nuqta koordinata boshiga yaqin";
    else{
    if(sqrt(pow(x1,2)+pow(y1,2))<sqrt(pow(x2,2)+pow(y2,2)))
    cout<<"B nuqta koordinata boshiga yaqin";
    else cout<<"ikkala nuqta bir xil masofada";
    }return 0; }
