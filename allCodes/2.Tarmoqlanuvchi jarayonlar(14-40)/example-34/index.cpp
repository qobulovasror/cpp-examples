// 34. Uch xonali son berilgan.
// a)  uning hamma raqamlari bir xilmi?
// b)  uning raqamlari ichida bir xil raqamlar borligini aniqlang.

#include <iostream>
using namespace std;
int main()
{   int a,n1,n2,n3;
    cout<<"uch xonali son=";cin>>a;
    if((a>99)&&(a<=999))
    {n3=a%10;n2=(a/10)%10;
    n1=a/100;if((n3==n2)&&(n2=n1))
    cout<<"hamma raqami bir xil";
    else cout<<"hamma raqami bir xil emas";
    }else cout<<"son xato";
    return 0; }
 
 
 
//34-b-asala
#include <iostream>
using namespace std;
int main()
{   int a,n1,n2,n3;
    cout<<"uch xonali son=";cin>>a;
    if((a>99)&&(a<=999))
    {n3=a%10;n2=(a/10)%10;
    n1=a/100;if((n3==n2)&&(n3=n1))
    cout<<"hamma raqami bir xil";
    else {  if((n3==n2)||(n2==n1)||(n1==n3))
            cout<<"ikkita bir xil raqami bor";}
    }else cout<<"son xato";
    return 0; }
