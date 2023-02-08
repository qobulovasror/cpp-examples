// 3.  To’g’ri burchakli uchburchakning ikkita burchagi α va β hamda gipotenuza c berilgan. Shu uchburchakning katetlarini topish dasturini tuzing.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{ float a,b,C,X,Y;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"C=";cin>>C;
    X=C*sin(b);  Y=C*sin(a);
    cout<<"X=" <<X <<endl;
    cout<<"Y=" <<Y;
    return 0; 
}