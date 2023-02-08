// 56. Natural son berilgan. Berilgan sondagi hamma 7 raqamini 8 raqamiga almashtiring va yozuvdan hamma birlarni o’chiring. Masalan, 175718 uchun yangi son 8588 ga teng.
#include <iostream>
using namespace std;
int main()
{int c,k=1,n,a=0;
    cout<<"n=";cin>>c;
    n=c;
    while(n!=0)
    { if(n%10==7)
         { a=a+(1+(n%10))*k;
            k=k*10; }
    if(n%10!=1&&n%10!=7&&n%10!=0)
        {a=a+(n%10)*k;k=k*10;}
    if(n%10==0)
    {a=a+n%10;k=k* 10;}
        n=n/10;  }cout<<a;
    return 0;  }
