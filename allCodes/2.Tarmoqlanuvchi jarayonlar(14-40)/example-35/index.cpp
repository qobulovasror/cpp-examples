// 35. To’rt xonali son berilgan. Aniqlang:
// a)  uning birinchi ikkita raqamlari yig’indisi, uning oxirgi ikkita raqamlarining yig’indisiga tengligini;
// b)  uning raqamlari yig’indisi uchga karraligini;
// v) uning raqamlari ko’paytmasi to’rtga karralagini;
// g) uning raqamlari ko’paytmasi a soniga karraligini.

// a)
#include <iostream>
using namespace std;
int main()
{  int a,n4,n3,n2,n1,x,y;
    cout<<"son=";cin>>a;
    if((a>999)&&(a<=9999))
    {n4=a%10;n3=(a/10)%10;
    n2=((a/10)/10)%10;
    n1=a/1000;x=n1+n2;
    y=n3+n4;if(y==x)
    { cout<<"jumla rost"<<endl<<"yig'indilar teng";
     }else cout<<"teng emas";
    }else cout<<"son xato";
    return 0; }
 
 
 
//35-b-masala
#include <iostream>
using namespace std;
int main()
{  int a,n4,n3,n2,n1,x;
    cout<<"son=";cin>>a;
    if((a>999)&&(a<=9999))
    { n4=a%10;n3=(a/10)%10;
    n2=((a/10)/10)%10;
    n1=a/1000;x=n1+n2+n3+n4;
    if(x%3==0)
    {cout<<"raqam yig'ndisi 3ga karrali";
    }else cout<<"jumla yolg'on";
    }else cout<<"son xato";
    return 0;}
 
 
//35-v-masala
#include <iostream>
using namespace std;
int main()
{int a,n4,n3,n2,n1,x;
    cout<<"son=";cin>>a;
    if((a>999)&&(a<=9999))
    {n4=a%10;n3=(a/10)%10;
    n2=((a/10)/10)%10;
    n1=a/1000;
    x=n1*n2*n3*n4;
    if(x%4==0)
    {cout<<"raqam ko'paytmasi 4ga karrali";
    }else cout<<"jumla yolg'on";
    }else cout<<"son xato";
    return 0; }
 
 
//33g-masala
#include <iostream>
using namespace std;
int main()
{ int a,y,n4,n3,n2,n1,x;
    cout<<"son=";cin>>y;
    if((y>999)&&(y<=9999))
   {n4=y%10;n3=(y/10)%10;
    n2=((y/10)/10)%10;
    n1=y/1000;
    x=n1*n2*n3*n4;
    cout<<"a soni=";cin>>a;
    if(x%a==0)
{cout<<"raqam ko'paytmasi a ga karrali";
     }else cout<<"jumla yolg'on";
    }else cout<<"son xato";
    return 0; }
