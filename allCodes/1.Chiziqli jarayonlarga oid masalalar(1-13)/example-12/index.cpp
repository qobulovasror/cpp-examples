// 12. A uzunlikdagi vatar bilan kesilgan segment maydonidan R radiusli aylananing maydoni necha marta kattaligini aniqlashga dastur tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float A,R,a,x;
    const float pi=3.14;
    cout<<"vatar uzunligi=";cin>>A;
    cout<<"radius uzunligi=";cin>>R;
    //s2/s1=pRR/aRR=p/a
    //AA=RR+RR-2RRcosa;
    a=acos((2*R*R-A*A)/(2*R*R));
    x=pi/a;
    cout<<"segment maydonidan aylana maydoni qancha kattaligi="<<x;
    return 0;
}
