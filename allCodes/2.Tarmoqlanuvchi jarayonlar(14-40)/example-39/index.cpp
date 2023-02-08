// 39. Bir biriga teng bo’lmagan x va y haqiqiy sonlar berilgan. Bu ikkita sondan  kichigini ularning yig’indisining yarmi bilan, kattasini esa – ularning ko’paytmasini ikkilanganligi bilan almashtiring.
#include <iostream>
using namespace std;
int main()
{  float x,y;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    if(x!=y){if(x<y)
    {cout<<"y katta"<<endl;
    x=(x+y)/2;cout<<"x="<<x<<endl;
    y=(x*y)*2;
    cout<<"y="<<y<<endl;
    }else{
    cout<<"x katta"<<endl;
    y=(x+y)/2;
    cout<<"y="<<y<<endl;
    x=(x*y)*2;cout<<"x="<<x<<endl;
    }}else cout<<"sonlar xato";
    return 0;}
