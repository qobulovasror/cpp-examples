// 4.  To’g’ri burchakli uchburchakning a va b katetlari berilgan. Ushbu uchburchakning perimetri va yuzasini topish dasturini tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{  int a,b,c,P,S;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    P=a+b+c;   S=(a*b)/2;
    cout<<"perimetri="<<P<<endl;
    cout<<"yuzi="<<S;
    return 0;  
}
