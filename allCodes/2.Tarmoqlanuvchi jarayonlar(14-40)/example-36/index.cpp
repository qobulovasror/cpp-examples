// 36. Uchta haqiqiy sonlar berilgan. Ulardan manfiymaslarini kvadratga, manfiylarini to’rtinchi darajaga ko’taring.
#include <iostream>
using namespace std;
int main()
{ float a,b,c;
cout<<"a son=";cin>>a;
    cout<<"b son=";cin>>b;
    cout<<"c son=";cin>>c;
    if(a>0)
    cout<<"a musbat="<<(a*a)<<endl;
    else cout<<"a manfiy"<<(a*a*a*a)<<endl;
    if(b>0)
    cout<<"b musbat="<<(b*b)<<endl;
    else cout<<"b manfiy="<<(b*b*b*b)<<endl;
    if(c>0)
    cout<<"c musbat="<<(c*c)<<endl;
    else cout<<"c manfiy="<<(c*c*c*c)<<endl;
    return 0; }
