// 32. Uchxonali son berilgan. Uning polindrom (“telba-teskari”) ekanligini aniqlang, ya’ni u shunday sonki, o’nli qiymatlarni chapdan o’ngga yoki o’ngdan chapga o’qiganda bir xil o’qiladi.
#include <iostream>
using namespace std;
int main()
{int x,n1,n2,n3;
    cout<<"son=";cin>>x;
    if((x>99)&&(x<=999)){
    n3=x%10; n2=(x/10)%10;
    n1=x/100;if(n1==n3)
    cout<<"polindrom ya'ni telba-teskari";
    else cout<<"polidrom emas";}
    else cout<<"son xato";
    return 0;   }
