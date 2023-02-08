// 20. Uchburchakning ikkita burchagi (gradusda) berilgan. Bunday uchburchak mavjudligini,  agar mavjud bo’lsa uning to’g’ri burchakli ekanligini aniqlang.

#include <iostream>
using namespace std;
int main()
{ float a,b,g;
    cout<<"a burchakni kiriting(gradusda)=";cin>>a;
    cout<<"b burchakni kiriting(gradusda)=";cin>>b;
    if((a+b)<180)
    { if((a==90)||(b==90)||(a+b==90))
      cout<<"uchburchak to'g'ri burchakli";
      else cout<<"uchburchak yasash munkin";}
    else cout<<"uchburchak yasab bulmaydi";
    return 0; }
