// 26. Uchta turli xil sonlarning maksimal va minimal qiymatlarini aniqlang.
#include <iostream>
using namespace std;
int main()
{  float a,b,c;
    cout<<"1-son=";cin>>a;
    cout<<"2-son=";cin>>b;
    cout<<"3-son=";cin>>c;
    if((a!=b)&&(a!=c)&&(b!=c))
    {  if((a>b)&&(a>c))
{  cout<<"1-son maksimal son"<<endl;
if(b>c) cout<<"3-son minimal son";
else cout<<"2-son minimal son";    }
else{if((b>a)&&(b>c)){
cout<<"2-son maksimal son"<<endl;
if(a>c) cout<<"3-son minimal son";
else cout<<"1-son minimal son";
 }else { if((c>b)&&(c>a))
{ cout<<"3-son maksimal son"<<endl;
if(b>a)cout<<"1-son minimal son";
else cout<<"2-son minimal son";
} else cout<<"shart bajarilmadi!";
}}} else cout<<"shart bajarilmdi";
return 0; }
