// 33. Uch xonali son berilgan. Aniqlang:
// a)  uning raqamlari yig’indisi ikki xonali son hisoblanishini;
// b)  uning raqamlari ko’paytmasi uch xonali son hisoblanishini;
// v) a soni uning raqamlari ko’paytmasidan kattaligini;

#include <iostream>
using namespace std;
int main()
{  int a,n3,n2,n1,x;
    cout<<"son=";cin>>a;
    if((a>99)&&(a<=999))
    {n3=a%10;n2=(a/10)%10;
    n1=a/100;x=n3+n2+n1;
    if(x>9)
    cout<<"raqamlar yig'indisi 2 xonali";
    else cout<<"jumla yolg'on";
    }else cout<<"son xato";
    return 0; }
 
 
 
//33-b-masala
#include <iostream>
using namespace std;
int main()
{  int a,n3,n2,n1,x;
    cout<<"son=";cin>>a;
    if((a>99)&&(a<=999))
   {n3=a%10;n2=(a/10)%10;
    n1=a/100;x=n3*n2*n1;
if((x>99)&&(x<=999))
cout<<"jumla rost raqamlar ko'paytmasi 3 xonli";
else cout<<"jumla yolg'on";
} else cout<<"son xato";
   return 0; }
 
 
//33-v-malasa
#include <iostream>
using namespace std;
int main()
{  int b,a,n3,n2,n1,x;
    cout<<"son=";cin>>b;
    if((b>99)&&(b<=999))
    {cout<<"a=";cin>>a;
    n3=b%10;
    n2=(b/10)%10; n1=b/100;
    x=n3*n2*n1;   if(a>x)
    cout<<"jumla rost a raqamlar ko'paytmasidan katta";
    else cout<<"jumla yolg'on";
    }else cout<<"son xato";
    return 0; }
