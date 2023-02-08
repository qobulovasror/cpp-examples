// 21. a, b, c sonlar orasidan manfiylarini sonini hisoblang.
#include <iostream>
using namespace std;
int main()
{ int a,b,c,n;
    cout<<"a son=";cin>>a;
    cout<<"b son=";cin>>b;
    cout<<"c son=";cin>>c;
    if((a<0)&&(b<0)&&(c<0))
      cout<<"manfiylar 3 ta";
    else {
if(((a<0)&&(b<0))||((a<0)&&(c<0))||((b<0)&&(c<0)))
    cout<<"manfiylar 2 ta";
else { if((a<0)||(b<0)||(c<0))
cout<<"manfiylar 1 ta";
else cout<<"manfiylar yuq";
}} return 0; }
