// 14. a, b, c butun sonlar berilgan. Bu sonlardan nechtasi musbat ekanligini aniqlash dasturini tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{  float a,b,c,x;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    if((a>0)&&(b>0)&&(c>0))
        cout<<"3 tasi";
    else {
 if(((a>0)&&(b>0))||((b>0)&&(c>0))||((a>0)&&(c>0)))  cout<<"2 tasi";
        else  {
          if((a>0)||(b>0)||(c>0))
          cout<<"1 tasi";
          else cout<<"yuq"; } }
    return 0;
  }
