// 55. Manfiy bo’lmagan butun son berilgan. Uning o’nli yozuvidagi nollar sonini aniqlang. Masalan, n=103062 uchun javob 2.
#include <iostream>
using namespace std;
int main()
{
    int i,n,x,s=0;
    cout<<"son=";cin>>n;
    while(n>0)
    {x=n%10;if(x==0)
    s++;n=n/10;
    if(n==0)break;}
    cout<<"nollar soni="<<s;
 return 0;
}
