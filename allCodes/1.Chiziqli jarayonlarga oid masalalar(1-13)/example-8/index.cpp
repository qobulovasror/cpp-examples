// 8.  Ikkita a va b son berilgan. Bu sonlarning o’rta arifmetigining kubini va o’rta geometrigining modulini topish dasturini tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{   float a,b,x,y;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    x=pow(((a+b)/2),3);
    y=abs(sqrt(a*b));
    cout<<"orta arifmetigining kubi="<<x<<endl;
    cout<<"orta geometrigining moduli="<<y<<endl;
    return 0; } 
