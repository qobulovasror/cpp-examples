// 22. Uchburchakning uchta a, b va c tomonlari berilgan. Bu uchburchak to’g’ri burchakli uchburchak va qaysi tomoni gipotenuza ekanligini aniqlang.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ float a,b,c;
   cout<<"a tomon=";cin>>a;
   cout<<"b tomon=";cin>>b;
   cout<<"c tomon=";cin>>c;
    if(c==sqrt(a*a+b*b))
    {cout<<"to'g'ri burchakli"<<endl;
    cout<<"gipotinuza c";}
    else{ if(b==sqrt(a*a+c*c))
    {cout<<"to'g'ri burchakli"<<endl;
    cout<<"gipotinuza b";}
    else { if (a==sqrt(b*b+c*c))
    {cout<<"to'g'ri burchakli"<<endl;
    cout<<"gipotinuza a";}
else cout<<"shart bajarilmadi";}
}return 0; }   
