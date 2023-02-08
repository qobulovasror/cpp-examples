// 25. n (n≤9999) natural soni berilgan. Agar u 3363, 4844, 0300 sonlar kabi to’rtta raqamlar bilan yozilsa, uning uchta raqamlari bir xilligini aniqlang.
#include <iostream>
using namespace std;
int main()
{  int n,n4,n3,n2,n1;
    cout<<"9999 sonidan katta bulmagan son kiriting=";cin>>n;
    n4=n%10; n3=(n/10)%10;
    n2=((n/10)/10)%10; n1=n/1000;
    if((n>999)&&(n<=9999))
    { if(((n4==n3)&&(n3==n2))||((n4==n3)&&(n3==n1))||((n4==n2)&&(n1==n2))||((n3==n2)&&(n2==n1)))
    cout<<"uchta raqami bir xil";
    else cout<<"to'rtta raqam bor va uchta bir xil raqam yuq";
    } else cout<<"shart majarilmadi";
    return 0; }
