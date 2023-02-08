// 1.  Uchburchakning uchta koordinatasi (x1, y1), (x2, y2), (x3, y3) berilgan. Uning perimetri va yuzasini topish dasturini tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{  float x1,y1,x2,y2,x3,y3,p,s,AB,AC,BC;
    cout <<"x1=";cin>>x1;
    cout <<"y1=";cin>>y1;
    cout <<"x2=";cin>>x2;
    cout <<"y2=";cin>>y2;
    cout <<"x3=";cin>>x3;
    cout <<"y3=";cin>>y3;
    s=x1*(y2-y1)+x2*(y3-y2)+x3*(y3-y1);
    AB=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    AC=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    BC=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    p=AB+AC+BC;
   //s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    cout<<"perimetri=" <<p <<endl;
    cout<<"yuzasi=" <<s <<endl;
    return 0; 
}

